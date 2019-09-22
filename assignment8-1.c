#include<stdio.h>
int main() 
{
int i, n, x,z, s=0;
printf("%d",n);
scanf("%d",&n);
printf("Give %d numbers: ", n); 
for(i=1; i<=n; i++)
            {
              scanf("%d", &x);
              x=x%10;
              s=s+x;
            }
            printf("%d", s);
    }
