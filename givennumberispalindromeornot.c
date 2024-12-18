#include <stdio.h>
void main() {
    int n,temp,rev,rem;
    printf("enter a value:");
    scanf("%d",&n);
    temp=n;
    rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        }
    if(temp==rev){
        printf("it is a palandrome");
    }
    else{
        printf("it is not a palandrome");
    }
}
