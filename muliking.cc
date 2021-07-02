//c program showing averange of 3 subjects
#include <stdio.h>
int main()
{
int maths,phyc,bio;
float averange;
printf("enter value maths");
scanf("%d",&maths);
printf("enter value phyc");
scanf("%d",&phyc);
printf("enter value bio");
scanf("%d",&bio);
averange=(maths+phyc+bio)/3;
printf("averange%f\n",averange);

if(averange>70)
{
	printf("A");
}
else if(averange>60)
{
	printf("B");
}
else if(averange>50)
{
	printf("C");
}
else if(averange>40)
{
	printf("D");
}
else
{
	printf("FAIL");
}
	
	return 0;
}