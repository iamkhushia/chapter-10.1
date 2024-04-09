#include<stdio.h>

cube(int x)
{

	printf("cube of %d = %d",x,x*x*x);
}

void main()
{
	//Write a Program to find the cube of a given number using UDF.
	
	int c;
	
	printf("enter the any number = ");
	scanf("%d",&c);
	
	cube(c);
	
}