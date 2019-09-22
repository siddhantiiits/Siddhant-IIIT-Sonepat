#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter sides of triangle: ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if (a*a == b*b + c*c)
	{
		printf("Triangle is right angled at A");
	}
	else
	{
		printf("Triangle is not right angled at A");
	}
	

}