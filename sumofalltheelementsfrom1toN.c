#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the Nth number:");
    scanf("%d",&n);

    for (i=0;i<=n;++i)
    {
        sum=sum+i;
    }

    printf("The sum of all elements is: %d", sum);
}
