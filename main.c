#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "my_func.h"

int main(int argc, char **argv)
{
  printf("Hello, world! \n");
  print_my_name();
  printf("from online modify! \n");

  return 0;
}
