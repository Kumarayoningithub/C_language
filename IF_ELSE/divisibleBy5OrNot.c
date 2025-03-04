#include<stdio.h>
int main() {
int a;
printf("enter the positive integer: ");
scanf("%d",&a);
if(a%5==0){
    printf("divisible"); }
  else{
    printf("not");
  }  
  return 0;
}