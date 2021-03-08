#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,m=1;
    scanf("%d",&N);
    int B[100];
    if(m<100)
    {
        while(m%2==0 || m%3==0 || m%5==0)
        {
            if(m%7!=0 && m%11!=0 && m%19!=0)
            {
                B[i]=m;
                m++;
                i++;
            }

        }
        m++;
    }


    printf("%d",B[N]);
}
