#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(b>a && a>c || c>a && a>b)
	{
	printf("\n%d is a middle number",a);
	}
	if(a>b && b>c || c>b && b>a)
	{
		printf("\n%d is a middle number",b);
	}
	if(a>c && c>b || b>c && c>a)
	{
		printf("\n%d is a middle number",c);
	}
	return 0;
}
