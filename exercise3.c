#include<stdio.h>
int main() 
{
	int a,b,choice,res;
	printf("===BRANCHING STATEMENT===\n");
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("\n---MENU---\n");
	printf("1.check positive,negative or zero\n");
	printf("2.check even or odd\n");
	printf("3.find largest two numbers\n");
	printf("4.check divisibility by 5\n");
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(a>0)
			printf("%d is positive",a);
			else if(a<0)
			printf("%d is negative",a);
			else
			printf("%d is zero",a);
			break;
		case 2:
			if(a>b)
			printf("%d is Even",res);
			else
			printf("%d is odd",res);
			break;
		case 3:
			if(a>b)
			{
				res=a;
				printf("%d is the largest number",res);
			}
			else if(b>a)
			{
				res=b;
				printf("%d is largest number",res);
			}
			else
			{
				printf("%d is the largest number",res);
			}
			break;
		case 4:
			if(a%5==0)
			printf("%d is divisble by 5",a);
			break;
		default:
			printf("invalid choice");
			
}
return 0;
}