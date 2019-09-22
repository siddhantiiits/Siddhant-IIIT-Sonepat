#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if (a==b)
	{
		printf("%d",a);
	}
	else if (a==c)
	{
		printf("%d",a);
	}
	else if (c==b)
	{
		printf("%d",b);
	}

}