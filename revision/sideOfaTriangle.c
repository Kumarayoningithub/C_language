#include<stdio.h>
int main(){
    int a=3,b=4,c=7;
    if((a+b)>c&&(b+c)>a&&(c+a)>b) printf("possible");
    else
    printf("no");


    return 0;
}