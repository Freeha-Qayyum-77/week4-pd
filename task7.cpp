#include<iostream>
using namespace std;
void flowerShop(float redRose, float whiteRose, float tulip);

main()
{
	float redRose, whiteRose, tulip;
	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	cout << "Tulips: ";
	cin >> tulip;
	flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(float redRose, float whiteRose, float tulip)
{	
	float original;
	original= redRose*2 + whiteRose*4.1 +tulip*2.5;
	cout << "Original Price: $"<<original<<endl;
	float discount;

	if(original>200)
	{	
		discount= original-(original*0.2);
		cout<<"Price after Discount: $"<<discount;
	}
	if(original<=200) 
		cout << "No discount applied.";
}