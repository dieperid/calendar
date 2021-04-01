#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t t = time(NULL);

  printf("%s\n", ctime(&t));

  return 0;
}