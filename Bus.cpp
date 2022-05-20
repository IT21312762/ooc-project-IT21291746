#include<iostream>
#include<cstring>
//implementing default construtor for BusDetails
void Bus::BusDetails(){
	strcpy(busNo,"");
	strcpy(busType,"");
	noOfSeats=0;
}
//implementing parameter construtor for BusDetails
void Bus::BusDetails(char pbusNo[10],char pbusType[20],int pnoOfSeats){
	strcpy(busNo,pbusNo[10]);
	strcpy(busType,pbusType[20]);
	noOfSeats=pnoOfSeats;
}
void Bus::setBusDetails(){
	cout<<"Bus No:";
	cin>>busNo;
	cout<<"Bus Type:";
	cin>>busType;
	cout<<"No of Seats:";
	cin>>noOfSeats;
}
void Bus::displayBusDetails(){
	cout<<"Bus Number:"<<busNo<<endl;
	cout<<"Bus Type:"<<busType<<endl;
	cout<<"Number of Seats:"<<noOfSeats<<endl;
}
void Bus::updateBusDetails(){
	cout<<"New Bus Number:";
	cin>>busNo;
	cout<<"New Bus Type:";
	cin>>busType;
	cout<<"New Number of Seats:";
	cin>>noOfSeats;
}
//implementing destructor for Bus
void Bus::~Bus(){
	cout<<"Destructor runs in the Program"<<endl;
}
