#include<stdio.h>
int main()
{
    int i, j, n, p, q;

    printf("Input the number of rows : ");
    scanf("%d",&n);

    for ( i=1; i<=n; i++)
    {
        if(i%2)
        {
            p=1;
            q=0;
        }
        else
        {
            p=0;
            q=1;
        }
        for (j=1; j<=i; j++)
            if(j%2==0)
                printf("%d",q);
            else
                printf("%d",p);

        printf("\n");
    }
    return 0;
}
