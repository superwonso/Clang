#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������Ű��к� 2020037063 ������
int main(void)
{
    FILE *fp=NULL;
    char fname[30];
    float total=0.0;
    int math,kor,eng=0;
    printf("���� �Է��� �Է��ϼ��� : ");
    scanf("%s",fname);
    if ((fp=fopen(fname,"w"))==NULL)
    {
        printf("���� ���� %s�� �� �� �����ϴ�.\n",fname);
        exit(1);
    }
     while(1)
    {
    printf("���� ������ �Է����ּ��� : ");
    scanf("%d",&math);
    printf("���� ������ �Է����ּ��� : ");
    scanf("%d",&kor);
    printf("���� ������ �Է����ּ��� : ");
    scanf("%d",&eng);
    fprintf(fp, "%d %d %d\n",math,kor,eng);
    break;
    }
    
    fclose(fp);
    
    if((fp=fopen(fname,"r"))==NULL)
    {
        fprintf(stderr,"�������� %s�� �� �� �����ϴ�.\n",fname);
        exit(1);
    }
    while(!feof(fp))
    {
        fscanf(fp,"%d %d %d",&math,&kor,&eng);
        total=(math+kor+eng);
    }
    printf("��� = %f\n",total/3);
    fclose(fp);
return 0;
}