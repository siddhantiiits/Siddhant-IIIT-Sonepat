#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter two values a= ");
	scanf("%d",&a);
	printf("Enter two values b= ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d",a,b);
   

}