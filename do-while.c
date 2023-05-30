#include <stdio.h>

int main()
 
 {

    int num , index = 0;
    printf("enter a number\n");
    scanf("%d" , & num );

    do
    { printf("%d\n" , index );
        index = index + 15 ;
    } while (index < num );

    return 0;
    
 }

//    int num , index = 1;
//     printf("enter a number\n");
//     scanf("%d" , & num );

//     do
//     { printf("%d\n" , index  );
//         index = index * 7;
//     } while (index < num );

//     return 0;
    