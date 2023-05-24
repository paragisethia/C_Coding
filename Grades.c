#include <stdio.h>

int main ()

{ 
    int marks ;
    printf("Please enter your final marks:- \n" );
  
    scanf ("%d", &marks) ;
    if ( marks >= 80 && marks <= 100  )
    {

        printf ("Grade - A , Congratulations!!! \n") ;
    }

    else if (marks >=60 && marks < 80)
    {

        printf ("grade - B , you can do better \n" ) ;

    }

    else if (marks >=40 && marks < 60)
    {

        printf ("grade - C , its ok you tried \n") ;

    }
    else if (marks <= 36 && marks >= 0  )
    {

        printf ("Grade - None , You have FAILED :( \n") ;

    }

    else 
    {
        printf ("Please masti nhi, sahi grade dal bhosdike \n") ;
    }


    return 0 ;
}