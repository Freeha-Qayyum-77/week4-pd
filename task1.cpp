#include<iostream>
using namespace std;
void IsEqual(int a, int b);

main()
{
	int n1,n2;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	IsEqual(n1, n2);
}

void IsEqual(int a, int b)
{
	if(a==b)
	    cout<<"true";
	else
	    cout<<"false";
}

