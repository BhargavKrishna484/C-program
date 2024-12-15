#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the Nth number:");
    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
        if(i%2==0)
    {
        sum=sum+i;
    }
}
    printf("The sum of all elements is: %d",sum);
}
