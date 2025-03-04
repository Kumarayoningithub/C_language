#include <stdio.h>
int main()
{
    int n;
    printf("enter a no:");
    scanf("%d", &n);
    if(n%5==0||n%3==0){
        if(n%15!=0) printf("divisible by 5 or 3 but not 15");
        else printf("divisible by 5 or 3 also divisible by 15");
    }
    else printf("not divisible by anyone");
    
    return 0;}