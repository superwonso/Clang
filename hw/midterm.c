#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int primecheck(int a) // �Ҽ� �Ǻ� �Լ�
{
    int from,to; 
    to=(int)sqrt((double)a); // �� ��ȯ�� �������� ���� ��
    from=2;
    while (from<=to) // 2 ���� �������� ���� ������
    {
        if((a%from)==0) // �������� 0�϶���
        {
            return 0; // �Ҽ� �ƴ�
        }
        from +=1;
    }
    return 1; // �������� 0�� �ƴҶ��� �Ҽ���
}

int main() // ���� �Լ�
{
    int prime=primecheck(int randomnum); // �Ҽ� �Ǵ�
    int randomnum=srand((unsigned int)TIME(NULL));
    int random=randomnum;
    while (1) // ���� ����
    {
       if(rand>=2)
       {
        printf("%d�� ���� �Ҽ��ΰ��� �Ǵ��ϰڽ��ϴ�.",random);
        if(prime==1) // randomnum�� �Ҽ��̸�
        printf("%d�� �Ҽ��Դϴ�.\n",randomnum);
        else // randomnum�� �Ҽ��� �ƴϸ�
        printf("%d�� �Ҽ��� �ƴմϴ�.\n",randomnum);
       }
        else
        {
        printf("�Ҽ��� �Ǵ��� �� �����ϴ�.");
        }
        
    }
}