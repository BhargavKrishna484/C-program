#include<stdio.h>
void main()
{
    int age;
    printf("enter the person age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("the person is eligible to vote");
    }
    else{
        printf("the person is not eligible to vote");
    }
}