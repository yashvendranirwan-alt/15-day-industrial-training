#include<stdio.h>

int main(){
    int a[100], n, i, max;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    } 
    if(n > 0){
        max = a[0]; 
        for(i = 1; i < n; i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        printf("maximum = %d\n", max);
    } else {
        printf("Array is empty!\n");
    }

    return 0;
}
