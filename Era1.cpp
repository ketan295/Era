#include<iostream>
using namespace std;

class Distance
{
	public:
	int feet, inch;
	int sum=0,ex;
	
}d;
int main ()
{
	Distance d;
		
	cout<<"Enter distace in feet :";
	cin>>d.feet;
	cout<<"Enter distace in inch :";
	cin>>d.inch;
		
	if(d.inch>=12)
	{
		d.ex=d.inch/12;
		d.feet+=d.ex;
		d.inch=d.inch-12;
	
	}
	
	d.sum=d.feet+d.inch;

	cout<<"Sum of inch and feet :"<<d.sum;
	
	return 0;
}
