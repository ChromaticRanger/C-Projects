#include <stdio.h>

const int encryption_key = 42;

int main() {
  char c;
  while ((c = getc(stdin)) != EOF) {
    putc(c ^ encryption_key, stdout);
  }
}
