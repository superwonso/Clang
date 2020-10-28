#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
//������Ű��к� 2020037063 ������
void swap(int *a,int *b);
void start(); // �������� ����
void printarr(int(*arr)[5]); // ������
void computerselect();//���� ����,��ǻ��
void userselect();//���� ����,���� 
void selectednumber();//���� ó��
int checkwinner(int (*arr)[5]);//���� Ȯ��

int user[5][5];//����� ������
int computer[5][5];//��ǻ�� ������
int checked[25];//�ߺ� ���� ����
int count;//�ߺ� ���� ����

int main()
{
    int i,j,turn=0;
    start();
    do{
    if (turn%2==0)// ����� ��
    {
    system("cls");
    printarr(user);
    printf("\n ���ڸ� �����ϼ���:");
    userselect(); // ����� ���� ����
    selectednumber(); // ���õ� ������ ó��
    system("cls");
    printarr(user);
    printf("\n ����ڰ� [%d]�� �����Ͽ����ϴ�. \n",checked[count-1]);
    turn ++;
    }
    else  // ��ǻ�� ��
    {
        computerselect(); // ��ǻ�� ���� ����
        selectednumber(); // ���õ� ������ ó��
        printf("��ǻ�Ͱ� [%d]�� �����߽��ϴ�. \n",checked[count-1]);
        system("pause");
        turn ++;
    }
    } while ( (checkwinner(computer)+checkwinner(user)) ==0);
    system("cls");
    printf("����� : \n");
    printarr(user);
    printf("\n��ǻ�� : \n");
    printarr(computer);
    if ((checkwinner(computer) + checkwinner(user)) == 2) 
    {
        printf("���º� �Դϴ�.\n");
    }
    else
    {
        if (checkwinner(computer) == 1)
        printf("��ǻ�Ͱ� �̰���ϴ�.\n");
        else
        printf("����ڰ� �̰���ϴ�.\n");
    }
return 0;
}

void start()
{
    int i,j,k;
    int randarr[25];//�ӽ� �迭
    srand(time(NULL));
    for(i=0; i<25; i++)
    {
        randarr[i] = i+1; // �ӽ� �迭�� 1~25�� ���� ����
    }

    //��ǻ�� ������ �ʱ�ȭ
    for (i=0; i<25; i++)
    {
        swap(&randarr[i],&randarr[rand()%25]);
        for(i=0,k=0; i<5; i++)
        {
            for(j=0;j<5;j++)
            user[i][j]=randarr[k++];
        }

    }
    
    //���� ������ �ʱ�ȭ
    for(i=0; i<25; i++)
    checked[i]=0;
    count =0;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void printarr(int (*arr)[5])
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (arr[i][j]!=-1)
            printf("%5d",arr[i][j]);
            else
            printf("%5c",'X');
        }
        printf("\n");
    }
}

void computerselect() // ��ǻ�� ���� ����
{
    int i,computerselectnum,flag;
    while(1)
    {
        computerselectnum=(rand()%25)+1;//���ڸ� ���Ƿ� �߻���Ű��
        flag=0;
        for(i=0;i<count;i++)
        if (checked[i] == computerselectnum)//�̹� �����ϸ� ǥ��
        flag=1;

        if(flag==0)//�������� ������
        {
            checked[count++]=computerselectnum;
            //�ԷµǴ� ���ڴ� checked �迭�� ���� �߰�
            break;
        }
    }
}

void userselect()//������ ���� ����
{
    int i,userselectnum,flag;
    while (1)
    {
        scanf("%d",&userselectnum);
        flag=0; // �÷��� �ʱ�ȭ
        if(userselectnum<0 || userselectnum>25)
        flag=1;

        for(i=0;i<count;i++) // �̹� �����ϴ��� Ȯ��
        if(checked[i]==userselectnum)
        flag=1;
        if(flag==0)//�������� ������
        {
            checked[count++]=userselectnum; //���ڸ� �ְ� count ����
            //�ԷµǴ� ���ڴ� checked �迭�� ���� �߰�
            break;
        }
        printf("\n �˸��� ���ڸ� �����ϼ���:");
    }
}

void selectednumber()
{
    int i,j;
    //��ǻ�� ������ ó��
    for (i= 0; i< 5; i++)
    for (j = 0; j < 5; j++)
    if (computer[i][j] == checked[count -1])
    computer[i][j] = -1;
    
    //����� ������ ó��
    for (i= 0; i< 5; i++)
    for (j = 0; j < 5; j++)
    if (user[i][j] == checked[count -1])
    user[i][j] = -1;
}

int checkwinner(int(*arr)[5])
{
    int i,j,bingo,win=0;
    //�� Ȯ��
    for(i=0;i<5;i++)
    {
        bingo=0;
        for(j=0; j<5; j++)
        if(arr[i][j]==-1)
        bingo++;

        if (bingo==5) // �� �࿡ 5���� �����ϸ�
        {
            win=1;
            break;
        }
    }
    //�� Ȯ��
    for(j=0;j<5;j++)
    {
        bingo=0;
        for(i=0; i<5; i++)
        if(arr[i][j]==-1)
        bingo++;
        if (bingo==5) // �� ���� 5���� �����ϸ�
        {
            win=1;
            break;
        }
    }
    //�밢�� Ȯ��,���� �� ����
    bingo=0;
    for(i=0,j=0; i<5&&j<5; i++,j++)
    {
        if(arr[i][j]==-1)
        bingo++;
        if(bingo==5)//5���� �����ϸ�
        win=1;
    }
    
    //�밢�� Ȯ��,���� �� ����
    bingo=0;
    for(i=0,j=4; i<5&&j>-1; i++,j--)
    {
        if(arr[i][j]==-1)
        bingo++;
        if(bingo==5)//5���� �����ϸ�
        win=1;
    }
return win;
}
