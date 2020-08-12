#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int i, d, x=0;
  scanf("%d",&i);
  printf("\n");
  for(d=1; d <=10 ; d++)
  {
  	++x;
    printf("%d x %d = %d\n", i, x, i*x);
  }
  return 0;
}
