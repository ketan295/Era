#include <iostream>
using namespace std;

class Time
{
	public:
	int hh1, mm1, ss1; 
    int hh2, mm2, ss2; 
    int HH, MM, SS; 

};
	

int main()
{
    Time t1,t2,T;
    
    cout << "Enter first time:" << endl;
    cout << "Hours?: ";
    cin >> t1.hh1;
    cout << "Minutes?: ";
    cin >>t1. mm1;
    cout << "seconds?: ";
    cin >> t1.ss1;

    cout << "Enter second time:" << endl;
    cout << "Hours?: ";
    cin >> t2.hh2;
    cout << "Minutes?: ";
    cin >> t2.mm2;
    cout << "seconds?: ";
    cin >>t2. ss2;

    
    T.SS =t1. ss1 + t2.ss2;
    T.MM = t1.mm1 + t2.mm2 + (T.SS / 60);
    T.HH = t1.hh1 + t2.hh2 + (T.MM / 60);
    T.MM = T.MM % 60; 
    T.SS = T.SS % 60; 

    cout << "Added time is: ";
    cout << T.HH << " hour(s) " << T.MM << " minute(s) " << T.SS << " second(s)" << endl;

    return 0;
}
