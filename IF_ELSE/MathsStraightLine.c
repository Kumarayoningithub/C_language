#include<stdio.h>
int main()
{
double x1,y1,x2,y2,x3,y3;
printf("enter 1st point:");
scanf("%d%d", &x1, &y1);
printf("enter 2nd point:");
scanf("%d%d", &x2, &y2);
printf("enter 3rd point:");
scanf("%d%d", &x3 ,&y3);
double m1,m2;

m1 = (y2-y1)/(x2-x1);
m2 = (y3-y2)/(x3-x2);

if(m1=m2)
printf("yes it was a straight line");

else{
    printf("no it is not");
}
return 0;    
}