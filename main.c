#include <stdio.h>

int main() {
  char carName[] = "Honda";
  int i;
  
  for (i = 0; i < 5; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}