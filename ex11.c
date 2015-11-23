#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = argc;
  char *states[i];

  while (i) {
    i--;
    states[i] = argv[i];
  }

  for (i = 0; i < argc; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}