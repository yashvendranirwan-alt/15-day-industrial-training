#include <stdio.h>
void main() {
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if (n<=1)
   prime=0;
  else{
    for(i = 2;i<n;i++){
      if(n%i==0){
        prime = 0;
        beak;
      }
    }
  }
  if(prime)
  printf("prime");
else
printf("not prime");
}

