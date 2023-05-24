// Q3 calculate value of Y = (3x+8)^2 if x<0 , Y = (4x -9)^2 if x>=0 . take input X give output Y

#include <stdio.h>

int main()
{
    int x;
    printf("Enter X :-\n");
    scanf("%d", &x);
    int Y;

    if (x < 0)
    {
        Y = (3 * x + 8) * (3 * x + 8);
    }
    else{
        Y = (4*x - 9)*(4*x - 9) ;
    }
    printf("%d\n" ,Y);
}