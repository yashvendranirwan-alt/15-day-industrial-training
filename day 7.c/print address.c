#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("value = %d\n",a);
    printf("adress = %p\n",(void*)&a);
    printf("pointer = %p\n",(void*)&a);
    return 0;
}