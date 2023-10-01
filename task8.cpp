#include<iostream>
using namespace std;
void pet(int holidays);

main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}

void pet(int holidays)
{	
	int workingdays,timeforgames,normdifference,norm_difference;
	workingdays=365-holidays;
	timeforgames=workingdays*63+holidays*127;
	normdifference= 30000-timeforgames;
	norm_difference=timeforgames-30000;
	
	if(timeforgames<30000)
{	
		int hours, mins;
		hours=normdifference/60;
		mins= normdifference%60;
		cout<<"Tom sleeps well"<< endl;
		cout<<hours<<" hours and "<<mins<<" minutes less for play";
}
	if(timeforgames>30000)
{
		int hour, min;
		hour= norm_difference/60;
		min= norm_difference%60;
		cout<<"Tom will run away"<<endl;
		cout<<hour<<" hours and "<<min<<" minutes for play";
}
}

	
	