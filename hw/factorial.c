#include <stdio.h>
int factorial(int num);
int main()
{
int num;
printf("���丮�� ������ �ǽ��� ���� �Է����ּ���.(n!) :");
scanf("%d",&num);
printf("%d! = %d �Դϴ�.\n",num,factorial(num));

return 0;
}

int factorial(int num)
{
int result;

    if(num==1)
    {
        result=1;
    } 
    else result=num*factorial(num-1);

return result;
}
