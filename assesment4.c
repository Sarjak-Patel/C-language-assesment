//4.return datatype with argument

#include<stdio.h>
int sum(int x,int y); //declaration
int sum(int x,int y)  //definition
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
int main()
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
				printf("Addition:%d",sum(x,y));
				break;
		case 2:	
				printf("Subtraction:%d",sub(x,y));
				break;		
		case 3:	
				printf("Multiplication:%d",mul(x,y));
				break;
		case 4:
				printf("Division:%d",div(x,y));
				break;				
	}
}
