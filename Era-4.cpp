#include<iostream>

using namespace std;

class House
{
	public:
	char housename[30];
	char address[100];
	int room ; 

};

int main()
{
	House n , a , r ;
	cout<<"Enter house name: ";
	cin>>n.housename;
	cout<<"Enter Address : \n";
	cin>>a.address;
	cout<<"Enter total rooms :";
	cin>>r.room;
	
	cout<<endl<<"_______________________"<<endl<<endl;
	
	cout<<"Housename:"<<n.housename<<endl;
	cout<<"Address is: "<<a.address<<endl;
	cout<<"Enter total rooms :"<<r.room<<endl;
	
}
