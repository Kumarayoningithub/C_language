#include<stdio.h>
int main(){
int n;
printf("enter a num :");
scanf("%d", &n);
int factorial=1;
for(int i =1; i <=n; i++){
factorial= factorial * i;
// printf take jodi ami for loop er bracket er baire likhi tahole sudhu jeta ache 1tar value berobe, 
// but jodi setake bracket er moddhe likhe print kore die tahole  somosto fractorial er value berobe.

printf("%d\n", factorial);}


return 0;    
}