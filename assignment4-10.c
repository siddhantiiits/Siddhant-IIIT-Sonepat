#include<stdio.h>
int main()
{
	int x,a;
	for(x=0; x<100; x++)
	{
		a=x%10;
		if((a>5) && (a<8))
		{
			printf("%d\n",x);
		}
	}	
}