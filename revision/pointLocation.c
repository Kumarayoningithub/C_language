#include<stdio.h>
int main(){
    int x,y;
    printf("enter tge coordinates");
    scanf("%d %d",&x,&y);
     if (x == 0 && y == 0)
        printf("lies origin");
    else if (y==0) printf("lies on x axis");
    else if(x==0)
        printf("lies on y axis");
   else printf("it is not lies on x,y axis and not lies on origin");
       

return 0;    
}