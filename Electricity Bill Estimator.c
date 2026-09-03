#include<stdio.h>
int main() {
  int unit,bill;
  printf("Enter your unit:");
  scanf("%d",&unit);
if(unit<0) {
    printf("invalid unit:");
}else if(unit<=100){
    bill=unit*5;
    printf("your total bill is: %d",bill);
}else if(unit<=200){
    bill=unit*7;
    printf("your Total bill is: %d",bill);
}else{
    bill=unit*10;
    printf("your total bill is: %d",bill);
}
return 0;
}
