#include<stdio.h>
int main(){
int cp, sp, profit, loss;
printf("enter cost price");
scanf("%d",& cp);
printf("enter selling price");
scanf("%d", &sp);
profit = sp - cp;
loss = cp - sp;
if(cp<sp) {
    printf("profit of %d", profit);
}
if(cp>sp) {
    printf("loss of %d", loss);
}
 
 if(cp==sp){

    printf("no profit no loss");
 }

return 0;
}
..