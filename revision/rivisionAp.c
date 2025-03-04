#include<stdio.h>
int main(){
    // 1,3,5,7,9
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i = i + 1)
    {

        

        printf("%d", a);
        a = a + 2;
   } 
    return 0;
}