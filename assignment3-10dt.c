#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x;
	printf("Enter five numbers a,b,c,d,x : ");
	scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&x);
	if (a==x && b==x && c==x && d==x)
	{
		printf("4");
	}
	else if ((a==x && b==x && c==x) || (b==x && c==x && d==x)||(a==x && d==x && c==x) ||(a==x && b==x && d==x))
	{
		printf("3");
	}
	else if (a==x && b==x || a==x && c==x || )
	{
		printf("%d",c);
	}
	else if (d==x)
	{
		printf("%d",c);
	}

}