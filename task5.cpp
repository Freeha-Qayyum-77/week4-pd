#include<iostream>
using namespace std;
void possibleBonus(int a, int b);

main()
{
	int position;
	int friends_position;
	cout<<"Enter your position: ";
	cin>>position;
	cout<<"Enter your friend's position: ";
	cin>>friends_position;	
	possibleBonus(position, friends_position );
}

void possibleBonus(int a, int b)
{
		
	if(b-a <= 6)
		cout << "true";
	else
		cout << "false";
}