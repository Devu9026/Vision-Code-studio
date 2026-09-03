#include <stdio.h>
int main() {
    int marks;
  printf("Enter your marks:");
  scanf("%d",&marks);
if (marks<0 || marks>100)
    printf("invalid Marks");
else if(marks>80)
    printf("Grade A");
else if(marks>60)
    printf("Grade B");
else if(marks>40)
    printf("Grade C");
else
    printf("Failed");
    return 0;
}
