#include <stdio.h>

int binary_search(int *array, int key)
{
  int len = sizeof(array) / sizeof(int);
  int index = len / 2;
  int step = index / 2;
  int cur = array[index];

/*
  while(first<last-1)
  {
    mid=(first+last)/2;
    if(x>=L[mid])
    {
      first = mid;
    }
    else
    {
      last=mid-1;
    }
  }
*/

  while(cur != key) {
    printf("len: %d, index: %d, step: %d, cur: %d, key: %d\n", len, index, step, cur, key);
    if(cur < key) {
      index += step;
    } else {
      index -= step;
    }

    step /= 2;
    cur = array[index];
  }

  printf("Hello helo\n");

  return 0;
}

int main(int argc, char **argv)
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index = binary_search(array, 6);
  printf("Index is %d\n", index);

  return 0;
}
