#include<stdio.h>
int main()
{
	int x;
	for(x=0; x<100; x++)
		if((x%3==0)||(x%7==0))
			printf("%d\n",x);
}