#include<iostream>
using namespace std;
void tpChecker(int num1, int num2);

main()
{
	int people, rolls;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>rolls;
	tpChecker(people, rolls);
}

void tpChecker(int a, int b)
{	
	int days;
		days=(500*b)/(57*a);
	if(days >= 14)
		cout<<"Your TP will last "<<days<<" days, no need to panic!";
	if(days < 14)
		cout<<"Your TP will only last "<<days<<" days, buy more!";
}