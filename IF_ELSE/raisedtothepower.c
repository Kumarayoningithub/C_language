#include <stdio.h>
int main()
{
    int a,b;
    printf("enter base: ");
    scanf("%d", &a);
    printf("enter a power: ");
    scanf("%d", &b);
    int power=1;
    for(int i =1;i<=b; i++){

        power=power*a;
        // printf("the power of %d is %d ", a, power);
    }

    printf("the power of %d is %d ", a, power);

    return 0;  }