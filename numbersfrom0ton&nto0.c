#include <stdio.h>
void main() {
    int n,i,j;
    printf("enter the value of N :");
    scanf("%d",&n);
for(i=0;i<=n;++i)
    {
        printf(" %d",i);
        
    }
    printf("\n");
    for(j=n;j>=0;--j)
    {
        printf("\t%d",j);
    }
}
