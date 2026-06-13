#include <stdio.h>

const int UPPER_DIFF = 32;

int main() {
  char c;
  while ((c = getc(stdin)) != EOF) {
    // if we captured a lowercase letter
    if (c > 96 && c < 123) {
      // convert to uppercase
      putc(c - UPPER_DIFF, stdout);
    } else {
      // otherwise just output as is
      putc(c, stdout);
    }
  }
}
