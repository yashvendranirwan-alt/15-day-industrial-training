#include<stdio.h>
void main(){
    int n,i,factorial=1;
    printf("enter value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("value of factorial %d",factorial );
}