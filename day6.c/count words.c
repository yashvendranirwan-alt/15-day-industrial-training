#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,word = 1;
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    for(i=0; str[i] != '\0';i++){
        if (str[i]==' '){
            word++;
        }
    }
    printf("word = %d",word);
    return 0;
    
}