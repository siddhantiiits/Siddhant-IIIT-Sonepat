#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y<5;y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (y%2==0)
				printf("**");
			else
				printf("*0");
		}
		printf("\n");
	}
}