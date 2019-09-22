#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,d,rt1,rt2,rtr1,rtr2;
	printf("Enter a,b&c: ");
	scanf("%f\n%f\n%f",&a,&b,&c);
	d=b*b-4*a*c;

	printf("Value of  d is %f",d);

	root1= (-b+sqrt(d))/(2*a);

	printf("Value of root 1 is %f",root1);
	root2= (-b-sqrt(d))/(2*a);
	if (d>0)
	{
		printf("%f\n%f",root1,root2);
	}
	else if (d==0)
	{
		printf("%f",root1);
	}
	else
	{
		rt1=-b/2*a;
		rt2=-rt1;
		rtr1=sqrt(-d)/2*a;
		rtr2=-rtr1;
		printf("%f+",rt1);
		printf("%f",rtr2);		
	}

}