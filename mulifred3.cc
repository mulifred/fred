//CPROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING
#include <stdio.h>
#include<strings.h>
int main()
{
//vowels=a,e,i,o,u;
char czar[]="anastacia";
int i=0;
int count=0;
while(i<=8)
{
	if(czar[i]=='a'||czar[i]=='e'||czar[i]=='i'||czar[i]=='o'||czar[i]=='u')
	{
		count ++;
	}
	i++;
}
printf("the number of vowels %d\n",count);

	return 0;
}