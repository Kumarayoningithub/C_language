#include<stdio.h>
int main() {
    int n;
    printf("enter a no: ");
    scanf("%d",&n);  //4,7,10,13,16
    int a=4;
    for(int i=1;i<=n;i=i+1) {
        printf("%d ",a);
        a=a+3; }
     return 0;
}