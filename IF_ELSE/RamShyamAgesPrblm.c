#include<stdio.h>
int main() {
 int ram,shyam,ajay;
printf("enter ram age:");
scanf("%d", &ram);
printf("enter shyam age:");
scanf("%d", &shyam);
printf("enter ajay age:");
scanf("%d", &ajay);
if (ram<shyam && ram< ajay)
{printf("ram is the youngest");}
if (shyam<ram && shyam< ajay)
{printf("shyam is the youngest");}
if (ajay<shyam && ajay< ram)
{printf("ajay is the youngest");}


 return 0;
}
