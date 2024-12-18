#include <stdio.h>
void main() {
    int n,temp,sum=0,rem;
    printf("enter a value:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
       rem=n%10;
       sum=sum+rem*rem*rem;
       n=n/10;
        }
        if(sum==temp)
        {
            printf("it is a armstrong");
        }
        else{
            printf("it is not a armstrong");
        }
}
