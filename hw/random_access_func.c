#include <stdio.h>
#include <stdlib.h>
//������Ű��к� 2020037063 ������
#define SIZE 100

void init_table(int table[],int size);

int main(void)
{
    int table[SIZE];
    int n,data;
    long pos;
    FILE *fp=NULL;
    init_table(table,SIZE);
    if( (fp=fopen("sample.dat","wb"))==NULL)
    {
        fprintf(stderr,"����� ���� ������ �� �� �����ϴ�.\n");
        exit(1);
    }
    fwrite(table,sizeof(int),SIZE,fp);
    fclose(fp);
    if((fp=fopen("sample.dat","rb"))==NULL)
    {
        fprintf(stderr,"�Է��� ���� ������ �� �� �����ϴ�.\n");
        exit(1);
    }
    while(1)
    {
        printf("���Ͽ����� ��ġ�� �Է��ϼ���(��, 0���� %d, ���� -1)\n",SIZE-1);
        scanf("%d",&n);
        if(n==-1) break;
        pos = (long)n*sizeof(int);
        fseek(fp,pos,SEEK_SET);
        fread(&data,sizeof(int),1,fp);
        printf("%d ��ġ�� ���� %d�Դϴ�.\n",n,data);
    }
    fclose(fp);
    return 0;
}

void init_table(int table[],int size)
{
    int i;
    for(i=0; i<size; i++)
    table[i]=i*i;
}