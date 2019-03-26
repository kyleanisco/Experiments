
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	double mass;
    	double volume;
    	double density;
    
	cout << "What is the mass of the object? (in g)\n";
	cin >> mass;
	
	cout<< "What is the density of the object? (in g/cm^3)\n";
	cin>> density;
	volume=(mass/density)/4;
	cout<< setprecision(2)<<fixed;
	cout<< "============================================= \n"; 
	cout << "The volume is "<<volume<<" cm^3."<<endl;
	cout<< "============================================= \n"; 
        getch;
        return 0;
    }

