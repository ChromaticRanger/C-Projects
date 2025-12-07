#include<stdio.h>

int main() {
 
  // Printing a string
  printf("Hello World!\n\n");

  // Printing numbers
  printf("1 + 1 = %d\n", 1 + 1);

  int a;
  int b;

  a = 3;
  b = 7;

  printf("%d + %d = %d\n", a, b, a + b);

  char letter = 'y';
  printf("Letter is %c\n\n", letter);

  int num = 0;
  printf("Please input a value for num: ");
  scanf("%d", &num);

  printf("Thank you, num now holds: %d\n", num);

  // Exit process
  return 0;

}
