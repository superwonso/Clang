#include <stdio.h>
#include <math.h>
//������Ű��к� 2020037063 ������
int check_primenum(int num);
int main()
{
    int num;
    int flag;
    printf("�Ҽ��� ������ ������ �Է��ϼ���.");
    scanf("%d",&num);
    if(num>1)
    {
        flag=1; // for checking
    }
    else flag=0;

    switch(flag)
    {
        case 0:
        {
            printf("�Ҽ��� �Ǻ��� �� �����ϴ�.\n");
        }
        case 1:
        {
            printf("%d�� ���� �Ҽ��� �Ǻ��ϰڽ��ϴ�.\n",num);
            check_primenum(num);
            if(check_primenum(num)==1) //if 'num' is the prime number, return value of check_primenum is 1
            {
                printf("%d�� �Ҽ��Դϴ�.\n",num);
            }
            else printf("%d�� �Ҽ��� �ƴմϴ�.\n",num);    
        }

    }
    return 0;
}

int check_primenum(int num)
{
    int prime;
    int from,to;
    to=(int)sqrt((double)num);
    
    for(from=2; from<=to; from++)
    {
        if( (num%to) == 0)
        {
            prime=0;    
            break;
        }
        else
        {
            prime=1;
        }
    }
return prime;
}