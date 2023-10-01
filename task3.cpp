#include<iostream>
using namespace std;
void Discount(string name, float price);
main()
{
	string name;
	float price;
   while(true)
	{	
	cout<<"Enter the country's name: "  <<endl;
	cin>>name;
	cout<<"Enter the ticket price in dollars: $" <<endl;
	cin>>price;
	Discount(name, price); 
        }
}

void Discount(string name, float price)
{
	if(name=="Pakistan")
	{
		price= price-(price*5/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}    
	if(name=="Ireland")
	{ 
		price= price-(price*10/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
	if(name=="India")
	{ 
		price= price-(price*20/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
	if(name=="England")
	{ 
		price= price-(price*30/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
	if(name=="Canada")
	{ 
		price= price-(price*45/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}



}