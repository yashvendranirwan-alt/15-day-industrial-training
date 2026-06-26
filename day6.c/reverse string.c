#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    printf("enter the string :");
    fgets(str,sizeof(str),stdin);
    
    for(i =strlen(str)-2;i>=0;i--){
    printf("%c",str[i]);}
    return 0;
    
    
}