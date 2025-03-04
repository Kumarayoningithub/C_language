#include <stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("enter the length: ");
    scanf("%d",&l);
    printf("enter the bredth");
    scanf("%d",&b);

    area=l*b;
    perimeter=2*(l+b);

    if(area>perimeter){
        printf("yes it is");
    }
    else if(area==perimeter) printf("equal");
    else 
    printf("noo");
return 0;
}