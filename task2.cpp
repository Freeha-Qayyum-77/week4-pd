#include<iostream>
using namespace std;
void Reverse(string a);

main()
{
	string a;
	cout<<"Enter 'true' or 'false': ";
	cin>>a;
	Reverse(a);
}

void Reverse(string a)

{
	if(a=="true")
	   cout<<"false";
	if(a=="false")
	   cout<<"true";
}
