#include<stdio.h>

int main() 
{
int a,b,c;
printf("enter a no: ");
scanf("%d", &a);
printf("enter a no: ");
scanf("%d", &b);
printf("enter a no: ");
scanf("%d", &c);
if (a>b){
    if (a>c) {
 printf("a is greatest");
    }
    else{ printf("c is greatst");
    }
}
else { 
    if( b>c){
        printf("b is greatst");
    }
    else {
 printf("c is the greste");}
} 










return 0;
}