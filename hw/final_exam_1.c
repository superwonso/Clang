#include <stdio.h>
//������Ű��к� 2020037063 ������
// �⸻��� 9��
struct students_info // �л� ������ ����ü ����
{
    char name[20]; // �̸�
    double kor; // ���� ����
    double eng; // ���� ����
    double math; // ���� ����
};


int main()
{
double avg_kor,avg_eng,avg_math=0; // ����,����,���� ��� �Ǽ��� ���� ���� 
struct students_info s[2]; //����ü �迭
for (int x=0; x<3; x++) // s[0],s[1],s[2]�� ���� �Է�
{
    printf("�л��� �̸�, ���� ����, ���� ����, ���� ������ ������� �����ּ���\n");
    scanf("%s %lf %lf %lf",s[x].name,&s[x].kor,&s[x].eng,&s[x].math);
}
avg_kor = (s[0].kor+s[1].kor+s[2].kor)/3;
avg_eng = (s[0].eng+s[1].eng+s[2].eng)/3;
avg_math = (s[0].math+s[1].math+s[2].math)/3;
printf("���� ������ ��������� %.02lf �Դϴ�.\n",avg_kor);
printf("���� ������ ��������� %.02lf �Դϴ�.\n",avg_eng);
printf("���� ������ ��������� %.02lf �Դϴ�.\n",avg_math);
}