#include<stdio.h>

division(int x, int y)
{
	if(x%3==0 && y%5==0)
	{
		printf("The given number is divisible by both 3 & 5...");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5...");
	}
}

main()
{
	// Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
	
	int a,b;
	
	printf("enter the any number = ");
	scanf("%d",&a,b);
	
	division(a,b);
}