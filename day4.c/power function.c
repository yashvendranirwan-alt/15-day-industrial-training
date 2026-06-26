#include<stdio.h>
int power(int base,int exp){
    int i,result=1;
    for(i=1;i<=exp;i++){
        result *=base;
    }
    return result;
    
}
int main(){ int base,exp;
    printf("enter the base");
    scanf("%d",&base);
    printf("enter exp");
    scanf("%d",&exp);
    printf("%d",power(base,exp));
    return 0;
}