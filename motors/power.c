#include "math.h"
#include "stdio.h"


void usage();

int main(int argc, char const *argv[])
{
  /*
  Torque in Inch Pounds-force = Horsepower * 63025 / Motor RPM
  INPUTS: Horsepower, Motor RPM
  OUTPUTS: Torque in Inch Pounds-force
   */
  float horsepower, motor_rpm = 0.0;
  float torque;

  if (argc < 3){
    usage();
    return 1;
  }

  // printf("%s\n", argv[1]);
  // printf("%s\n", argv[2]);
  // return 0;

  if (sscanf(argv[1], "%f", &horsepower) != 1)
    usage();

  if (sscanf(argv[2], "%f", &motor_rpm) != 1)
    usage();

  torque = horsepower * 63025 / motor_rpm;
  printf("%s\n", "Torque in inch pounds-force");
  printf("%.5f\n", torque);

  return 0;
}

void usage() {
  printf("%s\n", "Power - Derek Chafin");
  printf("%s\n", "power <horsepower> <motor rpm>");
  printf("%s\n", "Calculates torque in inch pounds-force.");
}