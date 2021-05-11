#include<stdio.h>
#include<conio.h>

int sum(int,int); //fn decl

void main()
{
	int a,b,c;
	printf("Enter 2 values: ");
	scanf("%d%d",&a,&b);
	c=sum(a,b); // fn call: use
	printf("Result = %d",c);
	getch();
}

/* fn definition */
int sum(int x,int y) // returntype fnName(ArgumentList)
{
	int z;
	z=x+y;
	return z;
	//return;
}
