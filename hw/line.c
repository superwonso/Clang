#include <stdio.h>
#include <ctype.h>
//������Ű��к� 2020037063 ������
int alphabet[26];
void main(void) {
   char buffer[256], * pch;
   char ch;
   int n;
   FILE* fp = fopen("C:/Users/user/Desktop/b_b/Clang/hw/malloc.txt", "r");
   for (n = 0;n < 26;n++)
      alphabet[n] = 0;
   while (fgets(buffer, 255, fp) != NULL)
   {
      pch = buffer;
      while (*pch !=NULL)
      {
         if (isupper(*pch))
            alphabet[*pch - 'A'] += 1;
         else if (islower(*pch))
            alphabet[*pch - 'a'] += 1;
         pch++;
      }
   }
   fclose(fp);
   printf("������ �����ڼ�\n\n");
   for (n = 0;n < 26;n++)
    printf("%c: %d\t", n + 'A', alphabet[n]);
}