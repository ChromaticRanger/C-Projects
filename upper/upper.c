#include <stdio.h>
#include <ctype.h>

int main()
{
  int c; /* the character read*/
  while ((c = getchar()) != EOF)
    putchar (toupper(c));
  return 0;
}
