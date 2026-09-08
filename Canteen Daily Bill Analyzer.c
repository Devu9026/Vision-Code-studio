#include<stdio.h>
int main() {
printf("if your bill is under 500 then you will get discount 0%");
printf("if your bill is between 500 and 1000 then you will get discount 10percent ");
printf("if your bill is above 1000 then you will get discount 15percent\n");
int i,N,bill,discount,final;
printf("enter no of customer:");
scanf("%d",&N);
for(i=1;i<=N;i++) {
    printf("enter bill for customer:%d:",i);
    scanf("%d",&bill);
     if(bill<0)
      printf("enter correct amount:");
    else if(bill<500)
      discount=0;
    else if(bill<=1000)
      discount=bill*0.10;
    else
      discount=bill*0.15;
    final= bill-discount;
    printf("customer:%d\n",i);
    printf("original bill:%d\n",bill);
    printf("discount:%d\n",discount);
    printf("final bill:%d\n",final);
}                                
    return 0;
}
