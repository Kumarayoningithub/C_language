#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n); 
    // 1-2+3-4+5-6........n

    int sum =0;
    for(int i=1;i<=n; i++){
    if (i%2!=0)
    sum = sum +i;

    else 
    sum = sum -i;}
    printf("%d ", sum);


 return 0 ;   
}