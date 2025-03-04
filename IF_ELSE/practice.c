#include<stdio.h>
int main(){
int length, breath, area, perimeter;
printf("enter the length :");
scanf("%d",&length); 
printf("enter the breath :");
scanf("%d",&breath); 
area = length * breath;
perimeter = 2*(length+ breath);
if(area > perimeter)
{printf(" area greater");}

else { 
    printf(" not grater , perimeter greater");
}
return 0 ;    
}