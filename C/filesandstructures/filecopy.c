#include<stdio.h>
#include<stdlib.h>
int main()
{
       char ch;
       FILE *fp1, *fp2;
       fp1=fopen("z1.txt","r");
       fp2=fopen("z2.txt","w");
       if(fp1==NULL && fp2==NULL)
       {
              printf("File not open\n");
              exit(0);
       }
       while(1)
       {
              ch=fgetc(fp1);
              if(ch==EOF)
                     break;
              else
                     fputc(ch,fp2);
       }
       fclose(fp1);
       fclose(fp2);
       return 0;
}