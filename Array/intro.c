#include<stdio.h>
void print(int n){

if(n==0) return ;
     printf("good mrng\n");
      print(n-1);

   return ;
}


int main(){
  int n=5;
   print(n);


    return 0;
}