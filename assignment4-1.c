#include<stdio.h>
int main()
{
	int x;
	for(x=0; x<100; x++)
		if(((x>20)&&(x<70))&&(x%2==0))
			printf("%d\n",x);
}