#include<stdio.h>
int main(){
    int a=5;
    int* x;
    x=&a;

    printf("%p\n",&x);
    printf("%p\n",&a);
  printf("%p\n",x);
    printf("%d\n", *x);
 
   
    return 0;
}