#include<iostream>
using namespace std;
void longestTime(int a, int b);

main(){
	int hours, minutes;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	cout<<"Enter the number of minutes: ";
	cin>>minutes;
	longestTime(hours, minutes);
}

void longestTime(int a, int b)
{
	if(a*60< b)
		cout<<b;
	if(a*60>b)
		cout<<a;
}