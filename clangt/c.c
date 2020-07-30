#include <stdio.h>
int main(void)
{
    int H,M;
    scanf("%d %d",&H,&M);
    
    if(H>0)
    {
    if (M>45)
    {
        printf("%d %d",H,M-45);
    }
    else if (M==45)
    {
        printf("%d 0",H);
    }
    else if (M<45)
    {
        printf("%d %d",H-1,15+M);
    }
    }
    
    else if(H==0)
{
      if (M>45)
    {
        printf("0 %d",M-45);
    }
    else if (M==45)
    {
        printf("0 0");
    }
    else if (M<45)
    {
        printf("23 %d",M+15);
    }
}
return 0;
}
// =는 대입, ==는 같음비교. 
// https://www.acmicpc.net/problem/2884