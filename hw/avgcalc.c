#include <stdio.h> 
#include <math.h>
#define MAX 10
//������Ű��к� 2020037063 ������
double num[MAX];
int n;
void get_data();
void get_avg_devi(double *pavg,double *psqrdevi);
int main()
{
double avg, devi;
get_avg_devi(&avg,&devi);
printf("����� %2.2lf �Դϴ�.\n",avg);
printf("ǥ�������� %2.2lf �Դϴ�.",devi);
}

void get_data()
{
printf("10�� ������ �Ǽ��� �Է����ּ���.\n");
printf("�Է��� �����Ͻ÷��� 0 ������ ���ڸ� �Է����ּ���.\n");
n=0;
while(n<10)
{
    printf("%d��° ���ڸ� �Է��ϼ���.",n+1);
    scanf("%f",&num[n]);
    if (num[n]>0.0)
        n+=1;
    else
        break;
}
}

void get_avg_devi(double *pavg,double *psqrdevi)
{
double sum,vari,sumdouble,sqrvari,avg;
int x;
sum=sumdouble=0.0;
get_data();
for(x=0;x<n;x++)
{
    sum+=num[x];
    sumdouble=num[x]*num[x];
}

avg=sum/(double)n;
vari=sumdouble/(double)n - avg*avg;
sqrvari=sqrt(vari);

*pavg=avg;
*psqrdevi=sqrvari;
}
