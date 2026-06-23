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