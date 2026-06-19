// hello world
#include<stdio.h>
int main() {

printf("hello world");
  return 0 ;
}

// sum of two number

#include<stdio.h>
int main(){
  int a,b,c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
c=a+b;
printf("add of two number %d",c);
return 0;
} 


// area of rectangle
#include<stdio.h>
int main() {
  int l,w,a;
printf("length:");
scanf("%d",&l);
printf("width:");
scanf("%d",&w);
a=l*w;
printf("area of rectangle: %d",a);
return 0;
}

// simple intrest by use of data type float
#include<stdio.h>
void main(){
  float p,r,t,si;
printf("principle");
scanf("%f",&p);
printf("rate");
scanf("%f",&r);
printf("time");
scanf("%f",&t);
si=(p*r*t)/100;
printf("simple intrest:%f",si);
}


// celsus to fahrenheit
#include<stdio.h>
void main(){
float c,f;
printf("enter celcius");
scanf("%f",&c);

f=(c*9/5 ) +32;
printf("fahrenheit:%f",f);
}


// swap of two number
#include<stdio.h>
void main(){
  int a,b;
printf("enter value of a");
scanf("%d",&a);
printf ("enter value of b");
scanf("%d",&b);
a= a-b;
b= a+b;
a=b-a;
printf("after swap of a :%d\n",a);
printf("after swap of b:%d\n",b);
}
printf


















