#include<stdio.h>
int main()
{ int a,b,c ;

printf("enter the 1st no: ");
scanf("%d", &a);
printf("enter the 2nd no: ");
scanf("%d", &b);
printf("enter the 3rd no: ");
scanf("%d", &c);
if(a>b) {
    if(a>c)
    printf("the largest no is %d",a); 
    else{
        printf("the largest no is %d",c);
    } }

    else { if(b>c)
           printf("the largest no is %d",b);
           else {
            printf("the largest no is %d", c);
           } }
return 0;    
}