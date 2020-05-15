#include<stdio.h>
int prime(int n);
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	prime(a);	
}
int prime(int n)
{
	if(n%2 != 0)
	printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);
}
