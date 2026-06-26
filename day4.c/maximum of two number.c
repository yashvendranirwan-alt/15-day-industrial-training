#include<stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
        
    }
    else {
        return b;
    }
}
int main(){ int a,b;
    printf("enter first value : ");
    scanf("%d",&a);
    printf("enter second value : ");
    scanf("%d",&b);
    
    printf("maximum between two : %d",max(a,b));
    return 0;
}