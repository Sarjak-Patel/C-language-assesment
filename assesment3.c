//4.return datatype with argument

#include<stdio.h>
void sum(int x,int y); //declaration
void sum(int x,int y)  //definition
{
	printf("the sum is: %d",x+y);
}
void sub(int x,int y)
{
	printf("the sum is: %d",x-y);
}
void mul(int x,int y)
{
	printf("the sum is: %d",x*y);
}
void div(int x,int y)
{
	printf("the sum is: %d",x/y);
}
main()
{	
	int x,y,option;
	printf("----------------MENU----------------\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n\n");
	
	printf("Enter Your choice :");
	scanf("%d",&option);
	
	printf("Enter the first number :");
	scanf("%d",&x);
	printf("Enetr the second number :");
	scanf("%d",&y);
	switch(option)
	{
		case 1:	
				sum(x,y);
				break;
		case 2:	
				sub(x,y);
				break;		
		case 3:	
				mul(x,y);
				break;
		case 4:
				div(x,y);
				break;				
	}
}
