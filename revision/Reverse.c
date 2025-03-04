#include <stdio.h>
int main()
{ int n = 233654;
 int k;
 k=n;
    int r = 0;
    while (n != 0)
    {
    //     last = n % 10; r
    //     n=n/10;
    //     // if(n%2==0){
    //     printf("%d", last);
    // }
         r=r*10;
         r=r+(n%10);
         n=n/10;

    } printf("%d\n", r);
    int sum = k+r;
    printf("%d\n", sum);

return 0;}
