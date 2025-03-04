#include<stdio.h>
int main()
{
    int x,y;

    printf("enter the quardinate: ");
    
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
     printf("starts from origin");
     
    else if (x== 0)
      {printf("lies on y axis");}

    else if (y== 0) {
      printf("lies on x axis");}

    else
      printf("doesnt lies on x or y axis and origin also");





    return 0;
}