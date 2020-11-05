#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//������Ű��к� 2020037063 ������
void print_array(char *str, int array[],int size);
int binary_search(int array[],int size,int key);

int main()
{
int size=5;
int data[size-1];
srand(time(NULL));
for(int n=0;n<size;n++)
data[n]=(rand()%4)+1;

int index,key=1;
print_array("���� :",data,size);
while(key>0)
{
    printf("�˻��� ���� �Է��ϼ���:");
    scanf("%d",&key);
    if(key>0)
    {
        int index=binary_search(data,size,key);
        printf("%d�� Ž���մϴ�. \n ",key);
        if(index!=-1)
        printf("�����Ͱ� %d��°�� �ֽ��ϴ�.\n",index+1);
        else
        printf("�����Ͱ� ���Ͽ� �����ϴ�.\n");
        
    }
}
printf("���α׷��� �����մϴ�.\n");
}

void print_array(char *str, int array[],int size)
{
    int n;
    printf("%s %d\n",str,size);
    for (n=0; n<size; n++)
    {
        printf("%5d",array[n]);
        if((n+1)%10==0)
        printf("\n");
    }
    printf("\n");
}

int binary_search(int array[],int size,int key)
{
    int n;
    for(n=0;n<size;n++)
    {
        if(key==array[n])
        return n;
        if(key<array[n])
        break;
    }
    return -1;
}