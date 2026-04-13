#include<stdio.h.>
int main()
{
    int arr[6]={5,10,15,20,25,30};
    int sum=0;
    for(int i=0; i<6; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d", sum);
    return 0;
}