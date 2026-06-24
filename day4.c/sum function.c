#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter first value");
    scanf("%d",&a);
    printf("enter second value");
    scanf("%d",&b);
    printf("sum = %d",sum(a,b));
    return 0;
}