#include <stdio.h>
void main()
{
    int i,n,sumeven=0,sumodd=0;
    printf("Enter the Nth number:");
    scanf("%d",&n);

    for (i=1;i<=n;++i)
    {
        if(i%2==0)
    {
        sumeven=sumeven+i;
    }
    else{
        sumodd=sumodd+i;
    }
}
    printf("The sum of all elements is: %d",(sumeven-sumodd));
}
