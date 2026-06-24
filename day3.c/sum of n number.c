#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("sum of n number : %d",sum);
}