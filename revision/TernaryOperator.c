#include<stdio.h>
int main(){
    int marks[6] = {100,65,30,34,61,25};
    for(int i=0;i<=5;i++){
        if(marks[i]<35)
       printf("%d\n",i);
    }

 return 0;   
}