#include <stdio.h>

int main(void) 
{
  int i = 0;
  int number = 0;
  int total = 0;

  while (i < 5)
  {
    printf("Enter Number %d: ", i + 1);
    scanf("%d", &number);
    total += number;
    i++;
  }

  printf("Total: %d\n", total);
  printf("Average: %d\n", total / 5);

  return 0;
}
