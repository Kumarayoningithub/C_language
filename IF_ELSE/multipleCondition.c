#include<stdio.h>
int main() {
int n;
printf("enter a number: ");
scanf("%d", &n);
if(n%5 == 0  || n%3 == 0) {
   printf("the no is divisible by 3 and 5");
}
else { printf("no it is not divisible"); }




return 0;
}
