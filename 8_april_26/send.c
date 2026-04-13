 #include<stdio.h>

int main()
{
    int rollnum[4];
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &rollnum[i]);
    }

    for(int j = 0; j < 4; j++)
    {
        printf("%d\t", rollnum[j]);
    }

    return 0;
}