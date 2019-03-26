#include <iostream>
#include <conio.h>
#include<iomanip>
#include <math.h>
using namespace std;

    int main()
    {
   
    double AvgDailyBalance;
    double Interest;
    double day1;
    double day2;
    double netbalance;
    float payment;
    float interest;
    
    cout << "How much is the bill to be paid? \n";
    cin >> netbalance;
    cout << "How many days are in the billing cycle? \n";
    cin >> day1;
    cout << "How much is the payment of the customer? \n";
    cin >> payment;
    cout << "How many days are there before the cycle ends? \n";
    cin >> day2;
    cout<< "============================================= \n"; 
  AvgDailyBalance=(netbalance*day1-payment*day2)/day1;
  cout<< setprecision(2)<<fixed;
  cout << "Balance:"<<AvgDailyBalance<<"pesos"<<endl;
  cout<< "============================================= \n"; 
  interest=AvgDailyBalance*0.0152;
  cout<< "Interest:"<<interest<<endl;
  cout<< "============================================= \n"; 

    getch();
    return 0;
    }
