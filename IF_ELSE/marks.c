#include<stdio.h>
int main()
{ int n;
printf("enter the percentage: ");
scanf("%d", &n);
// if (n>80)
// printf("A");
// else if (n>60)
// {printf("B");}
// else if (n>40)
// {printf("C");}
// else
// {printf("D"); }

if (n>80)
    printf("A grade");

else { if(n>60)
        printf("B grade");
        else { 
            if( n>40)
            printf("C grade");
            else {printf("D grade");}
            }
      }     
return 0;    
}