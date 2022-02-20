#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int num1,num2,l;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	if (num2>num1)
	l=lcm(num1,num2);
	else
	l=lcm(num2,num1);
	printf("LCM of %d and %d is: %d",num1,num2,l);
	return 0;
}
int lcm(int a,int b)
{
	static int x=1;
	if(x%a==0 && x%b==0)
	{
		return x;
	}
	else
	{
		x++;
	    lcm(a,b);
	    return x;
	}
}
