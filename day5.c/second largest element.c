#include<stdio.h>

int main(){
    int a[100], n, i;
    int largest, second;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    largest = second = -99999; 
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++){
        if(a[i] > largest){
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest){
            second = a[i];
        }
    }
    printf("second largest = %d\n", second); 
    return 0;
}
