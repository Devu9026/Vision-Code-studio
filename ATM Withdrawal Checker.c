#include<stdio.h>
int main() {
int balance=5000;
int amount,check;
printf("your Balance is: %d\n",balance);
printf("enter amount in multiple of 100's form:");
scanf("%d",&amount);
check=amount%100;
if(amount<0)
    printf("enter correct withdrawl amount");
else if(amount<=balance && check==0)
    printf("Accepted");
else
    printf("insufficient Balance or not multiple of 100");
return 0;
}
