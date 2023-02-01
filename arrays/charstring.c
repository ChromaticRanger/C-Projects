#include <stdio.h>

int main (void)
{
  char mydata[5];
  mydata[0] = 'a';
  mydata[1] = 'b';
  mydata[2] = 'c';
  mydata[3] = 'd';
  mydata[4] = '\0';

  char s1[] = "This is my string.";

  printf("\n%s\n", mydata);
  printf("\n%s\n", s1);
  
  return 0;
}

