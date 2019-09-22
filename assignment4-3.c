#include<stdio.h>
int main()
{
	int x;
	for(x=0; x<100; x++)
		if(((x>0)&&(x<50)&&(x%2==0))||(x%2==1 && x>50 && x<100))
			printf("%d\n",x);
}