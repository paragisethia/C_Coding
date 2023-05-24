#include<stdio.h>

int main () 
{


    int g  ;
    scanf("%d",&g); //asking the User for Input 
    int h = g-1 ;
    h = g-2 ; 

    g = g-1 ;
    g = g*h ; 

    printf("%d\n" ,g);
return 0;
}