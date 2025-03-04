#include<stdio.h>
int main() {
 int a,b,c;
 printf("enter 1st side:");
 scanf("%d", &a);
 printf("enter 1st side:");
 scanf("%d", &b);
 
printf("enter 1st side:");
scanf("%d", &c);
if (a+b > c && b+c> a && c+a > b )
{
    printf("yes triangle is possible ");
} 
else
{
    printf(" no triangle is not possible");
}




 













return 0;    
}