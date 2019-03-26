
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	double mass;
    	double volume;
    	double density;
    
	cout << "What is the mass of the object? (in kg)\n";
	cin >> mass;
	
	cout<< "What is the volume of the object? (in m^3)\n";
	cin>> volume;
	density=mass/volume;
	cout<< setprecision(2)<<fixed;
	cout<< "============================================= \n"; 
	cout << "The density is "<<density<<" kg/m^3."<<endl;
	cout<< "============================================= \n"; 
        getch;
        return 0;
    }

