#include <stdio.h>
int main ()
{

int num1,num2;
printf("\n Enter the first number:");
scanf("%d",&num1);
printf("\n Enter the second number:");
scanf("%d",&num2);
switch(num1<num2)
{

case 0:
printf("%d is maximum",num1);
break;
case 1:
printf("%d is maximum",num2);
break;
}
return 0;
}
