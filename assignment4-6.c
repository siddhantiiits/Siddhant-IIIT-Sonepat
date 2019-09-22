#include<stdio.h>
int main()
{
	int x;
	for(x=0; x<100; x++)
		if(((x>50)&&(x<70))||(x<20)||(x>90))
			printf("%d\n",x);
}