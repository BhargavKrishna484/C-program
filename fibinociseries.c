#include <stdio.h>
void main() {
    int c,n,i,a=0,b=1;
    printf("enter the value of N:");
    scanf("%d",&n);
    printf("%d%d",a,b);
for(i=2;i<n;++i)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
