#include <stdio.h>
#define SIZE 3

struct students{
   int number;
   char name[10];
   double grade;
};

int main()
{
   struct students list[SIZE];
   int i;
   for(i=0; i<SIZE; i++)
   {
      printf("�й��� �Է��ϼ��� : ");
      scanf("%d",&list[i].number);
      printf("�̸��� �Է��ϼ��� : ");
      scanf("%s",list[i].name);
      printf("������ �Է��ϼ���(�Ǽ�����) : ");
      scanf("%lf",&list[i].grade);
   }
   for(i=0; i<SIZE; i++)
   {
      printf("�й� : %d, �̸� : %s, ����: %f\n",list[i].number,list[i].name,list[i].grade);
   }
return 0;
}