#include<stdio.h>
#include<conio.h>

void f1();
void f2();
void f3();

void main()
{
	f1();
	f2();
	getch();
}

/* fn definition */
void f1()
{
	printf("1");
	f2();
	printf("2");
	f3();
}
void f2()
{
	printf("3");
	//getch();
}
void f3()
{
	f2();
	printf("4");
}
