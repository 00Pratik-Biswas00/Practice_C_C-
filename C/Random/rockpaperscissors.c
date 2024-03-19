#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void rock_paper_scissors( char you, char comp)
{
       if(you == 'r' && comp == 'p')
              printf("You choose %c and computer choose %c. You Lose!\n", you,comp);
       else if(you == 'p' && comp == 'r')
              printf("You choose %c and computer choose %c. You Win!\n", you,comp);

       if(you == 's' && comp == 'r')
              printf("You choose %c and computer choose %c. You Lose!\n", you,comp);
       else if(you == 'r' && comp == 's')
              printf("You choose %c and computer choose %c. You Win!\n", you,comp);

       if(you == 's' && comp == 'p')
              printf("You choose %c and computer choose %c. You Lose!\n", you,comp);
       else if(you == 'p' && comp == 's')
              printf("You choose %c and computer choose %c. You Win!\n", you,comp);
       if(you == 'r' && comp == 'r' || you == 'p' && comp == 'p' || you == 's' && comp == 's')
              printf("Game Draw!\n");
}


int main()
{
       char you,comp;
       int n;
       srand(time(NULL));
       n = rand() % 100;
       if(n<33)
              comp = 's';
       else if (n>33  && n<66)
              comp = 'r';
       else if (n>66  && n<100)
              comp = 'p';
       printf("Enter r for Rock, p for Paper and s for Scissors: ");
       scanf("%c", &you);
       rock_paper_scissors(you,comp);














       return 0;
}



