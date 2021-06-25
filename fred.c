//a c++ program to compute area and perimeter of a rectangle
#include<iostream>
using namespace std;
int main()
{
int length,width;
int perimeter,area;
cout<<"enter length of the rectangle";
cout<<"enter width of the rectangle";
cin>>length;
cin>>width;
perimeter=(length+width)*2;
cout<<"perimeter="<<perimeter;
area=length*width;
cout<<"area="<<area;
	return 0;
}