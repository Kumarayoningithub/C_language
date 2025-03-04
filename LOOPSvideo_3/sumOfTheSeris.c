#include<stdio.h>
int main() {
int n;
printf("enter the no: ");
scanf("%d", &n);
// 1-2+3-4+5-6+7-8.........n
int sum = 0;
 if (n%2==0)
 sum = sum -n/2;
  if (n%2!=0)
sum = sum -n/2 - n;

printf("%d",sum);













return 0;    
}