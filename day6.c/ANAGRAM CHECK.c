#include<stdio.h>
#include<string.h>

int main(){
    char s1[100], s2[100];
    int i, j, temp, len;
    
    printf("enter first string : ");
    scanf("%s", s1); // 1. '&' hata diya
    printf("enter second string : ");
    scanf("%s", s2);
    
    len = strlen(s1);
    if(len != strlen(s2)){
        printf("not anagram\n");
        return 0;
    }
    for(i = 0; i < len - 1; i++){
        for(j = i + 1; j < len; j++){ 
            if(s1[i] > s1[j]){
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp; 
            }
            if(s2[i] > s2[j]){
                temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }
    
    if(strcmp(s1, s2) == 0){
        printf("anagram\n");
    }
    else{
        printf("not anagram\n");
    }
    return 0;}
