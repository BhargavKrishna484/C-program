#include<stdio.h>
void main()
{
    int a;
    printf("give a number from 1 to 12:");
    scanf("%d",&a);
    switch(a){
        case 1:printf("%d is jan",a);
        break;
        case 2:printf("%d is feb",a);
        break;
        case 3:printf("%d is mar",a);
        break;
        case 4:printf("%d is apr",a);
        break;
        case 5:printf("%d is may",a);
        break;
        case 6:printf("%d is jun",a);
        break;
        case 7:printf("%d is jul",a);
        break;
        case 8:printf("%d is aug",a);
        break;
        case 9:printf("%d is sep",a);
        break;
        case 10:printf("%d is oct",a);
        break;
        case 11:printf("%d is nov",a);
        break;
        case 12:printf("%d is dec",a);
        break;
        default:printf("invlaid number");
        break;
      }
  }
