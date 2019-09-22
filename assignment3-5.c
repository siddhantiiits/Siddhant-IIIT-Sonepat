#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,slope;
	printf("Enter a,b&c: ");
	scanf("%f\n%f\n%f",&a,&b,&c);
	slope=-a/b;
	printf("%f",slope);
	if (b==0)
	{
		printf("line is verticle");
	}
	else
	{
		printf("line is not verticle");
	}
	

}