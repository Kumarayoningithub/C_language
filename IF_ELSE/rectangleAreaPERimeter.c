#include<stdio.h>
int main () {
int ln,wid,area,perimeter;
printf("enter the length: ");
scanf("%d", &ln);
printf("enter the width :");
scanf("%d", &wid);
area = ln *  wid;
perimeter = 2* (ln+wid);
if(area>perimeter) {
    printf("yes area is greater");
}
if(area<perimeter) {
    printf("no area is not greater");
}
if(area == perimeter) {

    printf("both are equal");
}









return 0;    
}