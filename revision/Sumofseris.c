#include<stdio.h>
int main(){
    int n=9;
    int sum=0;
    for(int i=1;i<=n;i++){
      if(i%2==0) sum=sum-i;
      else sum=sum+i;

    }
  printf("%d", sum);
    return 0;
}