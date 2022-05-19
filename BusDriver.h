//IT21306518
//Jayasinghe.J.I.B
#include<iostream>
#include"BusDriver.h"
#include "Guest.h"
#include<cstring>
using namespace std;
 
void BusDriver::setBusDriverDetails()
{
	cout<<"Passenger ID:";
	cin>> driverID;
	cout<<"Passenger Username:";
	cin>> driverUsername;
	cout<<"Passenger Password:";
	cin>> driverPassword;
	cout<<"Passenger NIC:";
	cin>> driverNIC;
	cout<<"License expire date:";
	cin>>licenseExpDate;
}
void BusDriver::printBusDriverDetails()
{
	cout << "Name of the customer is : "<< name << endl;
 cout << "ID of the customer is : "<< driverID << endl;
    cout << "Email of the customer is : "<< email << endl;
 cout << "Password of the customer is : "<< driverPassword << endl;
cout << "Address of the customer is : "<< address << endl;
 cout << "Phone of the customer is : "<< contactNo << endl;
 cout << "NIC of the customer is : "<< driverNIC<< endl;
 cout << "Username of the customer is : "<< driverUsername << endl;
}
 void BusDriver::updateBusDriverDetails()
{
	cout<<"Passenger new ID:";
	cin>> driverID;
	cout<<"Passenger new Username:";
	cin>> driverUsername;
	cout<<"Passenger mew Password:";
	cin>> driverPassword;
	cout<<"Passenger new NIC:";
	cin>> driverNIC;
	cout<<"New License expire date:";
	cin>>licenseExpDate;
	
}
BusDriver::~ BusDriver()
{
	cout<<"destructor tuns"<<endl;
}
