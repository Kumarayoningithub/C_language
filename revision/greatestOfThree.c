#include<stdio.h>
int main(){
    int a=6,b=9,c=4;
    if(a>b&&a>c)printf("a is greatest");
    if (b > a && b > c)
        printf("b is greatest");
    if (c > b && a < c)
        printf("c is greatest");

    return 0;
}