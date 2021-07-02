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
averange=((maths+phyc+bio)/3);
printf("averange%f\n",averange);

if(averange>=70&&averange<100)
{{
	
	
	printf("A");
}
if(averange>=60&&averange<69)
{
	printf("B");
}
if(averange>=50&&averange<59)
{
	printf("C");
}
if(averange>=40&&averange<49)
{
	printf("D");
}
}
else 
{
	printf("FAIL");
}
	
	return 0;
}