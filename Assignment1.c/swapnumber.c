
// swap of two number
#include<stdio.h>
void main(){
  int a,b;
printf("enter value of a");
scanf("%d",&a);
printf ("enter value of b");
scanf("%d",&b);
a= a-b;
b= a+b;
a=b-a;
printf("after swap of a :%d\n",a);
printf("after swap of b:%d\n",b);
}