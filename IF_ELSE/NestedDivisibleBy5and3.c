#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%5 == 0) {
        if (a%3 == 0){
            printf("the number is divisible by 5 and 3"); }
        else {
            printf("the number is no divisible by 5 and 3"); }
    }
    else {
        printf("the number is not divisible by 5 and 3");
        }



return 0;
}






