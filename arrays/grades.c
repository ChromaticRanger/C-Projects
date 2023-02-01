#include <stdio.h>

int main (void)
{
  int grade[5];
  grade[0] = 92;
  grade[1] = 85;
  grade[2] = 72;
  grade[3] = 73;
  grade[4] = 95;

  for (int i = 0; i < 5; i++) {
    printf("grade[%d]=%d\n", i, grade[i]);
  }
  
  return 0;
}
