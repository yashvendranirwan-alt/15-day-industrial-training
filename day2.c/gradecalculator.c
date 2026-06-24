#include<stdio.h>
void main(){
    
    float n;
    printf("enter your total number out of 100 : ");
    scanf("%f",&n);
    if (n>=85){
        printf("grade A");
    }
    else if(n>=75){
        printf("grade B");
    }
    else if(n>=65){
        printf("grade c");
    }
    else if(n>=55){
        printf("grade D");
    
    }
    else if(n>=45){
        printf("grade E");
    }
    else if(n>=36){
        printf("grade p");
        
    }
    else {
        printf("fail");
    }
}