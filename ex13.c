#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
  if(argc != 2) {
    printf("ERROR: You need one argument.\n");
    // this is how you abort your program
    return 1;
  }
  //printf("RAND_MAX is %d\n", RAND_MAX);
  srand(time(NULL));
  rand();
  int r = (rand() - 1); // (RAND_MAX); // [0, 1)
  printf("%d\n", r);
  printf("%ld\n", time(NULL));
  printf("%d\n", RAND_MAX);
  /*
  int i = 0;
  for(i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];

    switch(letter) {
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;
      case 'e':
      case 'E':
        printf("%d: 'E'\n", i);
        break;
      case 'i':
      case 'I':
        printf("%d: 'I'\n", i);
        break;
      case 'o':
      case 'O':
        printf("%d: 'O'\n", i);
        break;
      case 'u':
      case 'U':
        printf("%d: 'U'\n", i);
        break;
      // ...and sometimes Y
      case 'y':
      case 'Y':
        printf("%f\n", r);
        if (r < 0.5) {
          printf("%d: 'Y'\n", i);
          break;
        }
      default:
        printf("%d: %c is not a vowel.\n", i, letter);
    }
  }
  */

  return 0;
}