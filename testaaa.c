#include <stdio.h>

int sum(int a, int b, int *ret)
{
  *ret = a + b;
  return 0;
}
