#include <stdio.h>
int multiply(int a,int b){
    int c=a*b;
    return c;
}
int main()
{
    int c=multiply(2,2);
    printf("%d",c);
    return 0;
}