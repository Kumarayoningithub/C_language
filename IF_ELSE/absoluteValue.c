#include<stdio.h>
int main() {
int a;
printf("enter the integer");
scanf("%d", &a);
if(a<0) {
a=a*(-1);}
 printf("the no is %d", a);
 
return 0;   
}