#include <stdio.h>
int main()
{
    int a;
    printf("enter the percentage");
    scanf("%d",&a);
    // if(a>91&&a<100) printf("excellent");
    // if (a > 91 && a < 100)
    //     printf("very good");
    // if (a > 71 && a < 80)
    //     printf("good");
    // if (a > 61 && a < 70)
    //     printf("u can do better");

    if (a > 80)
        printf("excellent");
    else if(a>60)
        printf("very good");
    else if (a>40)
        printf("good");
     else
     printf("fail");   

    return 0;}