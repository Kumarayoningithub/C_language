#include<stdio.h>
int main(){
    int cp,sp,ammount;
    printf("enter the cp: ");
    scanf("%d",&cp);
    printf("enter the sp: ");
    scanf("%d", &sp);
    if(cp==sp) printf("nothing");

    else if (cp>sp)
        printf("loss");
    else if (cp < sp){
        printf("profit");
        ammount=sp-cp;
        printf("\n%d",ammount);}

    return 0;    
}