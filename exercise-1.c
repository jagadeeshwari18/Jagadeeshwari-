#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("== OPERATORS AND EXPRESSION ==");
	printf("\nEnter the first number :",a);
	scanf("%d",&a);
	printf("\nEnter the second :",b);
	scanf("%d",&b);
	printf("\n -- MENU --\n");
	printf("1.ADDITION \n");
	printf("2.SUBTRACTION \n");
	printf("3.MULTIPLICATION\n");
	printf("4.DIVISION\n");
	printf("5.MODULUS \n");
	printf("\n Enter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		res=a+b;
		printf("Result=%d",res);
		break;
	case 2:
		res=a-b;
		printf("Result=%d",res);
		break;
	case 3:
		res=a*b;
		printf("Result=%d",res);
		break;
	case 4:
		if(b!=0)
		{
			res=a/b;
			printf("Result=%d",res);
		}
		else
		{
			printf("Division by zero is not possible");
		}
		break;
	case 5:
		if(b!=0)
		{
			res=a%b;
			printf("Result=%d",res);
		}
		else
		{
			printf("Modulus by zero is not possible :");
		}
		break;
	default:
		printf("Invalid choice");
	}
	return 0;
}