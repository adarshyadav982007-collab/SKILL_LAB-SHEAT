#include<stdio.h>
int main()
{
    int age;
    printf("enter the valu of age:");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("eligible for vote");
    }
    return 0;
}