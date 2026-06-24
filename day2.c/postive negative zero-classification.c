#include<stdio.h>
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0){
        printf("%d is zero",n);
    }
    else if(n>0){
        printf("%d is postive",n);
    
    }
    else{
        printf("%d is negative",n);
    }
}