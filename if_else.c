#include <stdio.h>

int main()

{
    // Q write a c Code to determine if a person is old , young , child
    // based on his age , 18 , 60
    int age;
    printf("Please Enter Age :- \n");
    scanf("%d", &age);
    if (age > 0 && age < 18)
    {
        printf("Sadly you are a child \n");
    }
    else if (age >= 18 && age < 60)
    {
        printf("Sadly you are young \n");
    }
    else if (age >= 60 && age < 150)
    {
        printf("Sadly you are a old \n");
    }
    else
    {
        printf("please enter correct age \n");
    }

    // if (/* condition */)
    // {
    //     /* code */
    // }

    return 0;
}

