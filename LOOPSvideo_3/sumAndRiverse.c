#include<stdio.h>
int main() {
int n;

printf("enter a num: ");
scanf("%d" , &n);
int orginal = n;
int r=0;
while(n!=0){
r=r*10;
r=r+n%10;
n=n/10;
}
printf("%d\n", r);
printf("%d \n",orginal);

printf( "%d",orginal+r);

return 0;}