#include<stdio.h>
int main()
{ int a;
printf("enter the number : ");
scanf("%d", &a);
if ((a%5 == 0 || a %3 == 0) && a!= 15)
{printf("divisible by 5 or 3 but no by 15");} 
else {
    printf("is not divible by 5,3, 15");
}

return 0;    
}