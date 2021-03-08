#include<stdio.h>

int main()
{
    int i,j,k;
    int N,m=0;

    scanf("%d" ,&N);
    if(N%2==0)
    {
        N--;
        m++;
        k=((N+m)/2)-1;
    }
    else
    {
        k=((N+m)/2);
    }
    for(i=0;i<(N+m)/2;i++)
    {
        for(j=0;j<N;j++)
        {
            if(j==(N/2)-i||j==(N/2)+i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    for(i=0;i<=k;i++)
    {
        for(j=0;j<N;j++)
        {
            if(j==i||j==(N-1)-i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
