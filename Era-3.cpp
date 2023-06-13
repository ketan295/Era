#include <iostream>
using namespace std;

class Time
{
	public:
    int time = 0;
    int hour = 0;
    int min = 0;
    int sec = 0;
 
};
 
int main()
{
    Time t , h , m , s;
    cout << "Enter a time in seconds: ";
    cin >> t.time;
 
    h.hour = t.time/3600;
    t.time = t.time%3600;
    m.min = t.time/60;
    t.time = t.time%60;
    s.sec = t.time;
 
    cout<<"\nThe time in HH:MM:SS format is: "<<endl;
    cout<<h.hour<<" hours, "
        <<m.min<<" minutes, and "<<s.sec<<" seconds!\n";
 
    return 0;
}