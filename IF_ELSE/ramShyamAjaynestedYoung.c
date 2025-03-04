#include<stdio.h>

int main() 
{
int ram,shyam,ajay;
printf("enter the age of ram: ");
scanf("%d", &ram);
printf("enter the age of shyam: ");
scanf("%d", &shyam);
printf("enter the age of ajay: ");
scanf("%d", &ajay);
if (ram<shyam){
    if(ram<ajay)
    printf("youngest is %d",ram);
    else{
        printf("youngest is%d", ajay);
    }
}
else {
    if(shyam<ajay) 
    printf("youngest is %d", shyam);
    else {
        printf("youngest is %d",ajay);
    }
}








return 0; 
}