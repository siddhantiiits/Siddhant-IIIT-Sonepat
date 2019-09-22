#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y<6;y++)
	{
		for (x = 0; x < 30; x++)
		{
			if (y==1 || y==5 || y==3)
			{
			if (x%3==0 || x%5==0 || x==0)
				{
				printf("*");
				}
			else
				{
				printf("0");
				}
		    }
		    else
		    {
		    	printf("0");
		    }

		}

		printf("\n");
	}
}