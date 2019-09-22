#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
		scanf("%d\n%d\n%d",&a,&b,&c);
		if ((a>b && b>c) || (c>b && b>a))
		{
			printf("%d is the middle number",b);
		}
		if ((b>a && a>c) || (c>a && a>b))
		{
			printf("%d is the middle number",a);
		}
		if ((b>c && c>a) || (a>c && c>b))
		{
			printf("%d is the middle number",c);
		}
}