#include <stdio.h>
void main(){
int a,b,c,result;
printf("enter the value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
result=(a>b)&&(a>c)?a:((b>c)?(b):(c));
printf("the largest value is%d",result);
}
