#include<stdio.h>
#include<conio.h>
int min_arr(int[],int);
void main()
{
	int i,m,n,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{       printf("enter value=");
		scanf("%d", &a[i]);
		i=i+1;

	}
	m=min_arr(a,n);

			 printf("%d",m);
	getch();
	return;
}
int min_arr(int a[],int n)
{
	int m,i;
			m=a[0];
			i=1;
			while(i<n)
			{

			     if(a[i]<m)
			     {
					m=a[i];
			     }
				i=i+1;
			}
			return m;
}
