#include <stdio.h>
int main(void)
{
  float a=100000;
  int k;
  while(k=365)
  {
      a*=1.02;
      k+=1;
  }
    printf("%d",a);
}
