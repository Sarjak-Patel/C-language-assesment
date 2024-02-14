//2.return datatype with no argument

#include<stdio.h>
int fun();
int fun()
{
	int add,sub,mul,div,n1,n2,option;
	printf("----------------MENU----------------\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n\n");
	printf("Enter Your choice :");
	scanf("%d",&option);
	
	printf("Enter the first number :");
	scanf("%d",&n1);
	printf("Enetr the second number :");
	scanf("%d",&n2);
	switch(option)
	{
		case 1:	add=n1+n2;
				printf("Addition:%d",add);
				break;
		case 2:	sub=n1-n2;
				printf("Subtraction:%d",sub);
				break;		
		case 3:	mul=n1*n2;
				printf("Multiplication:%d",mul);
				break;
		case 4:	div=n1/n2;
				printf("Division:%d",div);
				break;	
	}
	return option;
}
int main()
{
	fun();
}
