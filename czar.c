//c program to output add,sum,mul,div,reminder
#include <stdio.h>
int main()
{
	int a,b,add,sub,mul,div,rem;
	printf("enter a,b values:");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("result of addition=%d\n",add);
	printf("result of subtraction=%d\n",sub);
	printf("result of multiplication=%d\n",mul);
	printf("results of division=%d\n",div);
	printf("results of reminder=%d\n",rem);
	return 0;
}