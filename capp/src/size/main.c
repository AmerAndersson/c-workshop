#include <stdio.h>

int main() {
  // sizeof(int) returns size_t which is as unsigned int.
  // int value(-1) is converted to unsigned int as part of implicit conversion.
  // -1 will be represented as 0xFFFF in 16 bit machine(for example).
  // Usual arithmetic conversions are implicitly performed for common type.
  // int --> unsigned int --> long --> unsigned long --> long long --> unsigned long long --> float --> double --> long double

  // So expression becomes,
  // if(sizeof(int) > -1 ) ==> if(2 > 0xFFFF)
  // False is printed.
  if (sizeof(int) > -1)
    printf("True\n");
  else
    printf("False.\n");

  float f = 0.1;
  if (f == 0.1)
    printf("True\n");
  else
    printf("False..\n");

  // I suggest to try if((int)sizeof(int) > -1 ) for proper result.
  if ((int)sizeof(int) > -1) {
    printf("True\n");
  } else {
    printf("False.\n");
  }
  printf("============\n");

  int a, b = 1, c = 1;
  a = sizeof(c = ++b + 1);
  printf("a = %d, b = %d, c = %d\n", a, b, c);
  printf("============\n");


  return 0;
}