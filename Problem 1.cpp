
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	int price;
    	int TicketsSold;
    	int total;
    
	cout << "How much is the ticket? \n";
	cin >> price;
	
	cout<< "How many people bought the ticket? \n";
	cin>> TicketsSold;
	
	total=price*TicketsSold;
	cout<< "============================================= \n"; 
	cout << "TOTAL PRICE: "<<total<<"$"<<endl;
	cout<< "============================================= \n"; 
        getch;
        return 0;
    }

