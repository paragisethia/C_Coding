#include <stdio.h>
int main ()
{
//     label:
//     printf("We are inside infinite dimensions.\n");
//  goto end;
//     goto label;

//     end:
//     printf("We are at end.\n");
int num;
for (int i = 0; i < 9; i++)
{
    printf("%d\n" , i);
    for (int j = 0; j < 9; j++)

{
    printf("Enter the number, enter 0 to exit\n");
    scanf("%d" , &num );
    if (num==0)
    {
        goto end;
    }
}


}
end:
return 0; }