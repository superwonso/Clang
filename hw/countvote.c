#include <stdio.h>
#define max 5
//������Ű��к� 2020037063 ������
int main(void)
{
int ip[max];
int n=0;
int xdata=0;

    for(int i=0; i<max; i++) //ip[] data reset
    {
        ip[i]=0;
    }  
printf("1������ 4���߿� �ϳ��� ������(�����Ϸ��� ���� ���� �ٸ� ���ڸ� �־��ּ���) : ");
    while(scanf("%d",&xdata)==1)
    {
        n++;
        if(xdata<1 || xdata>=max)
        {
            ++ip[0];
        }
        else
        {
            ++ip[xdata];
        } 
        printf("1������ 4���߿� �ϳ��� ������ : ");
    }
    printf("\n��ǥ��\n");
        for(int i=1; i<max; i++)
        {
        printf("%d�� : %dǥ\n",i,ip[i]);
        }
    printf("��ȿǥ : %dǥ\n",ip[0]);
    printf("�� ��ǥ�� : %dǥ\n",n);
}