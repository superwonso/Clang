#include <stdio.h>
//������Ű��к� 2020037063 ������
#define N 40
int main()
{
    char dept[N],name[N];
    int grade=0,joiny=0;
//input

printf("������ �Է����ּ���.\n\n");

printf("�̸�? ");
scanf("%s",name);

printf("�а���? ");
scanf("%s",dept);

printf("���� �⵵��? ");
scanf("%d",&joiny);
int claof=joiny%100;

printf("�г���? ");
scanf("%d",&grade);

//output

printf("\n���� %d�й� %d�г� %s %s�Դϴ�.",claof,grade,dept,name);

return 0;
}