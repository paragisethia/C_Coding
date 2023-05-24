#include <stdio.h>

int main()

{
    int A,B,C,D , x;
    //printf("What is the total combined income of the 4 members of your family in a year?\n");
    printf("What is the income of A\n") ;
    scanf("%d", &A );
  
   printf("What is the income of B\n") ;
    scanf("%d", &B );
  
  
       printf("What is the income of C\n") ;
    scanf("%d", &C );
  
  
       printf("What is the income of D\n") ;
    scanf("%d", &D );
 
 
  x = A+B+C+D ;
   
    if (x > 200000)
    {
        printf("Your family is RICH\n");
    }

    else if (x >= 500000 && x < 2000000)
    {
        printf("Your family is MIDDLE CLASS\n");
    }

    else if (x >= 0 && x < 500000)
    {
        printf("Your family is POOR\n");
    }
    else
    {
        printf("Please enter the correct income in LPA only.\n");
    }

    return 0;
}