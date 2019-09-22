#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y<10;y++)
	{
		for (x = 0; x<=20; x++)
		{
			if (y>2 && y<=6)
				{
					printf("*");
				}
			else if (y<=2)
				{
					if(x<=8)
					{
						printf("0");
					}
					else if(x>=8)
					{
						printf("*");
					}

					}
			else if (y>=7)
			{
				if(x<=8)
					{
						printf("*");
					}
					else if(x>=8)
					{
						printf("0");
					}

			}		
		}
		printf("\n");
	}
}