#include<stdio.h>
#include<string.h>
/*
// 1. Print firstname & lastname:
void print(char arr[])
{
       for(int i=0; arr[i]!='\0' ; i++)
       {
              printf("%c",arr[i]);
       }
       printf("\n");
}
int main()
{
       char firstname[]="Pratik";
       char lastname[]="Biswas";
       print(firstname);
       print(lastname);
       return 0;
}*/

/*
//2. length of the string: 

void print(char arr[])
{
       for(int i=0; arr[i]!='\0' ; i++)
       {
              printf("%c",arr[i]);
       }
       printf("\n");
}
int length(char arr[])
{
       int count=0;
       for(int i=0; arr[i]!='\0' ; i++)
       {
              count++;
       }
       return count-1;
}
int main()
{
       char name[100];
       fgets(name,100,stdin);
       printf("length: %d\n", length(name));
       return 0;
}*/
/*
//3.take a str input using using %c:
int main()
{
       char name[100];
       char ch;
       int i=0;
       while(ch !='\n')
       {
              scanf("%c",&ch);
              name[i]=ch;
              i++;
       }
       name[i]='\0';
       puts(name);
       return 0;
}*/
//4. password salting:
/*
int main()
{
       char ch[100];
       scanf("%s",&ch);
       salting(ch);
       return 0;
}
void salting(char ch[])
{
       char salt[]="123";
       char  np[200];
       strcpy(np,ch);
       strcat(np,salt);
       puts(np);
}*/
//5. slice a  string:
/*
int main()
{
       char str[]="PRATIKBISWAS";
       slice(str,3,6);
       return 0;
}
void slice(char str[], int n, int m)
{
       char newStr[100];
       int j=0;
       for(int i=n; i<=m; i++, j++)
       {
              newStr[j]= str[i];
       }
       newStr[j] ='\0';
       puts(newStr);
}*/
//6. count vowels:
/*
int countVowels(char str[]);
int main()
{
       char str[]="prAtik bIswas";
       printf("%d",countVowels(str));
}
int countVowels(char str[])
{
       int count=0;
       for(int i=0; str[i] !='\0'; i++)
       {
              if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
              {
                     count++;
              }
       }
       return count;
}*/
//7. check a char is present or not
/*
void present(char str[], char ch)
{
       for(int i= 0; str[i] != '\0'; i++)
       {
              if(str[i]==ch)
              {
                     printf("char is present");
                     return;
              }
       }
       printf("char is not present");
}
int main()
{
       char str[100];
       gets(str);
       char ch;
       scanf("%c",&ch);
       present(str,ch);
}*/