/* Program to display the size of different data types */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b,c,d,e;
  a = (int)sizeof(int);
  b = (int)sizeof(long);
  c = (int)sizeof(float);
  d = (int)sizeof(double);
  e = (int)sizeof(char);
  printf("size of int=%d bytes \n", a);
  printf("size of long=%d bytes \n", b);
  printf("size of float=%d bytes \n", c);
  printf("size of double=%d bytes \n", d);
  printf("size of char=%d bytes \n", e);
  return 0;
}
