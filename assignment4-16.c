#include<stdio.h>
int main()
{
	int x,a,b,c;
	for(x=0; x<100; x++)
	{
		a=x%10;
		b=(x-a)/10;
		if(b%3!=0 && x%2==0)
		{
			printf("%d\n",x);
		}
	}	
}