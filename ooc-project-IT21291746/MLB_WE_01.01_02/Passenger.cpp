//IT21306518
//Jayasinghe.J.I.B
#include<iostream>
#include<cstring>
#include "guest.h"
#include"passenger.h"
using namespace std;
void Passenger::setPassengerDetails()
{
	cout<<"Passenger ID:";
	cin>> passengerID;
	cout<<"Passenger Username:";
	cin>> passengerUsername;
	cout<<"Passenger Password:";
	cin>> passengerPassword;
	cout<<"Passenger NIC:";
	cin>> passengerNIC;
}
void Passenger::printPassengerdetails()
{
	cout << "Name of the customer is : "<< name << endl;
 cout << "ID of the customer is : "<< passengerID << endl;
    cout << "Email of the customer is : "<< email << endl;
   cout << "Password of the customer is : "<< passengerPassword << endl;
   cout << "Address of the customer is : "<< address << endl;
   cout << "Phone of the customer is : "<< contactNo << endl;
  cout << "NIC of the customer is : "<< passengerNIC<< endl;
   cout << "Username of the customer is : "<< passengerUsername << endl;
}
void Passenger::updatePassengerDetails()
{
	cout<<"Passenger new ID:";
	cin>> passengerID;
	cout<<"Passenger new Username:";
	cin>> passengerUsername;
	cout<<"Passenger mew Password:";
	cin>> passengerPassword;
	cout<<"Passenger new NIC:";
	cin>> passengerNIC;
	
}
Passenger::~Passenger()
{
	cout<<"Destructor runs"<<endl;
}