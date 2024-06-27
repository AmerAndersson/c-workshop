#include <stdio.h>

int main() {

  int speed = 0;
  int time = 0;

  printf("Enter speed: ");
  scanf("%d", &speed);

  printf("Enter time: ");
  scanf("%d", &time);
  
  printf("Distance: %d\n", speed * time);
  return 0;
}