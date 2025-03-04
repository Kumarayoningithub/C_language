#include<stdio.h>
int main(){
int a;
printf("enter the number: ");
scanf("%d",&a);
// if(a%5 == 0 || a%3 == 0)
// {
// if(a%15 != 0) {

//     printf(" divisible by 5 or 3 but not 15");
// } else {
//     printf(" divisible by 5 or 3 and by 15");
// }

// }

// else {  printf(" not divisible by 5 or 3 and not by 15");

// }

if((a%5 == 0 || a%3 == 0) && a%15 != 0)
{

    printf("the no is divisible by 5 and 3 but not 15");

}

else {
    printf("doesnt follow the rules");
}


return 0;    
}