#include <stdio.h>
#include <stdlib.h>
#define MAXWORD 100
#define MAXLENNGTH 100
//������Ű��к� 2020037063 ������
void get_words();
void sort_string();
void print_words();
void deallocate();

char* pstrarray[MAXWORD];
int nword;

void main()
{
   get_words();
   sort_string();
   print_words();
   deallocate();
}

void get_words() {
   char buffer[100], * temp;
   int size;

   nword = 0;
   printf("�ܾ �Է��ϼ���. �ִ� �ܾ���� 100�� �Դϴ�.\n");
   printf("�Է��� �����Ϸ��� ���͸� ��������.\n\n");
   while (nword < MAXWORD)
   {
      printf("%d. �ܾ��Է�:", nword + 1);
      gets(buffer);
      if (strcmp(buffer, "") == 0)
         break;
      else
      {
         size = strlen(buffer) + 1;
         temp = (char*)malloc(size);
         strcpy(temp, buffer);
         pstrarray[nword++] = temp;
      }
   }
}



void deallocate()
{
   int n;
   for (n = 0;n < nword;n++)
      if (pstrarray[n] != NULL)
         free(pstrarray[n]);
}

void print_words()
{
   int n;
   printf("\n���� �� ���: �ܾ�� = %d\n", nword);
   for (n = 0;n < nword;n++)
      puts(pstrarray[n]);
}

void sort_string()
{
   int n, m, minindex;
   char* temp;

   for (n = 0;n < nword - 1;n++)
   {
      minindex = n;

      for (m = n;m < nword;m++)
         if (strcmp(pstrarray[minindex], pstrarray[m]) > 0)
            minindex = m;
      temp = pstrarray[minindex];
      pstrarray[minindex] = pstrarray[n];
      pstrarray[n] = temp;
   
   }
}