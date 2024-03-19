#include<stdio.h>
//1. check the existence of a file: (r mode gives null)
/*
int main()
{
       FILE *fp;
       fp = fopen("t1.txt", "r");
       if( fp==NULL)
              printf("Doesn't exist\n");
       else
              fclose(fp);
       return 0;
}*/
//2. check the existence of a file: (w mode creates new file)
/*
int main()
{
       FILE *fp;
       fp = fopen("t1.txt", "w");
       if( fp==NULL)
              printf("Doesn't exist\n");
       else
              fclose(fp);
       return 0;
}*/
//3. Reading from a file:
/*
int main()
{
       FILE *fp;
       fp = fopen("t1.txt", "r");
       char str[10];
       if(fp==NULL)
              printf("Doesn't exist\n");
       else
       {
              fscanf(fp,"%s",&str);
              printf("%s\n",str);
       }
       fclose(fp);
       return 0;
}*/
//4.Writing to a file:
/*
int main()
{
       FILE *fp;
       fp = fopen("t1.txt", "w");
       if(fp==NULL)
              printf("does't exist");
       else
              fprintf(fp, "%s", "Kuntal");
       fclose(fp);
       return 0;
}*/
//5. append to a file:
/*
int main()
{
       FILE *fp;
       fp = fopen("t1.txt", "a");
       if(fp==NULL)
              printf("does't exist");
       else
              fprintf(fp, "%s", " Payel Pratik Titun");
       fclose(fp);
       return 0;
}*/
//6. read a whole file:
/*
int main()
{
       FILE *fp;
       fp = fopen("t1.txt", "r");
       char ch;
       ch = fgetc(fp);
       while(ch != EOF)
       {
              printf("%c", ch);
              ch = fgetc(fp);
       }
       printf("\n");
       fclose(fp);
       return 0;
}*/
//7. read 5 integer value: 
/*
int main()
{
       FILE *fp;
       fp = fopen("c1.txt", "r");
       int n;
       fscanf(fp, "%d", &n);
       printf("%d\n",n);
       fscanf(fp, "%d", &n);
       printf("%d\n",n);
       fscanf(fp, "%d", &n);
       printf("%d\n",n);
       
       fclose(fp);
       return 0;
}*/
//8. Store student's name, age, cgpa:
/*
int main()
{
       FILE *fp;
       fp = fopen("p1.txt", "w");
       char name[100];
       int age;
       float cgpa;
       printf("enter name: ");
       scanf("%s", &name);
       printf("enter age: ");
       scanf("%d", &age);
       printf("enter cgpa: ");
       scanf("%f", &cgpa);

       fprintf(fp, "%s\n", name);
       fprintf(fp, "%d\n", age);
       fprintf(fp, "%0.2f\n", cgpa);
       fclose(fp);
       return 0;
}*/
//9. store odd nos  upto n in a file:
/*
int main()
{
       FILE *fp;
       fp = fopen("k1.txt","w");
       int n;
       printf("Enter number: ");
       scanf("%d", &n);
       for(int i=1;i<=n;i++)
       {
              if(i%2 != 0)
                     fprintf(fp, "%d\n", i);
       }
       fclose(fp);
       return 0;
}*/
//10. Write a&b and replace the file with its sum:
/*
int main()
{
       FILE *fp;
       fp = fopen("s1.txt","r");
       int a;
       fscanf(fp, "%d", &a);
       int b;
       fscanf(fp, "%d", &b);
       fclose(fp);
       fp = fopen("s1.txt", "w");
       fprintf(fp, "%d\n", (a+b));
       fclose(fp);
       return 0;
}*/