#include<stdio.h>
int main() {
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    for(int i=4;i<=2*n-1;i=i+3) {
        printf("%d ",i); }
     return 0;
}