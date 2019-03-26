
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    	int box = 250;
	int sideline = 100;
	int premium = 50;
	int general = 25;
	int a= 5750, b = 28000, c=35750, d=18750; 
    	int total;
    
	cout << "The total sales in box tickets is: " << box*a<<"$"<<endl;
	
	cout<< "The total sales in sideline tickets is: "<<sideline*b<<"$"<<endl;
	cout << "The total sales in premium tickets is: "<<premium*c<<"$"<<endl;
	cout << "The total sales in general admission tickets is: "<<d*general<<"$"<<endl;
	
	total=( box*a)+(sideline*b)+(premium*c)+(d*general);
	cout<< "============================================= \n"; 
	cout << "TOTAL PRICE: "<<total<<"$"<<endl;
	cout<< "============================================= \n"; 
        getch;
        return 0;
    }

