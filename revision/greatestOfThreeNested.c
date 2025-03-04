#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the 1st no: ");
    scanf("%d",&a);
    printf("enter the 2nd no: ");
    scanf("%d", &b);
    printf("enter the 3rd no: ");
    scanf("%d", &c);
    if(a>b){
    if(a>c) printf("a is the greatest");
    else printf("c is the greatest");}

    else { if(b>a)
    if(b>c)printf("b is the gretest");
    else
        printf("c is the greatest");
    }
    return 0;
}