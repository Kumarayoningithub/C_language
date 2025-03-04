#include <stdio.h>
int main()
{
    int n = 233654;
    int last=0;
    int sum=0;

    while (n != 0)
    {
        last=n%10;
        // if(n%2==0){
        sum=sum+last;
        n=n/10;
    }
    printf("%d", sum);

    return 0;
}