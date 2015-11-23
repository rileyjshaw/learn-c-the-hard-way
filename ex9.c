#include <stdio.h>

int main(int argc, char const *argv[])
{
  int numbers[4] = {7};
  char name[4] = {'a', 'a', 'a', 'a'};

  char *name2 = (char*)name;

  // first, print them out raw
  printf("numbers: %d %d %d %d\n",
    numbers[0], numbers[1],
    numbers[2], numbers[3]);

  printf("name vals: %d %d %d %d\n",
    name[0], name[1],
    name[2], name[3]);

  printf("name: %s\n", name);
  printf("Next char: %d\n", name[4]);
  printf("name2: %s\n", name2);

  // setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // setup the name
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = 'a';

  // then print them all out initialized
  printf("numbers: %d %d %d %d\n",
    numbers[0], numbers[1],
    numbers[2], numbers[3]);

  printf("name chars: %d %d %d %d\n",
    name[0], name[1],
    name[2], name[3]);

  printf("name: %s\n", name);

  // another way to use name
  /*char *another = "Zed";

  printf("another chars: %c %c %c %c\n",
    another[0], another[1],
    another[2], another[3]
  );

  printf("another: %s\n", another);
*/
  return 0;
}