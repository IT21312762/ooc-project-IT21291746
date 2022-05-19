//IT21306518
//Jayasinghe.J.I.B
#ifndef PASSENGER_H
#define PASSENGER_H
#include<cstring>
#include "guest.h"
class Passenger : public Guest {
protected:
 int passengerID;
 char passengerUsername[15];
 char passengerPassword[10];
 char passengerNIC[12];
public:
 //defualt constructor for passenger class
 Passenger()
 	{
	  passengerID = 0;
    strcpy (passengerUsername, "");
    strcpy (passengerPassword, "");
    strcpy (passengerNIC, "");
 
}
//Constructors with paramenters for Passenger class 
 Passenger(char gName[], char gEmail[], long int gContactNo, char gAddress[] ,int pID, char pUsername[], char pPassword[],  char pNIC[])
 :Guest (gName,gEmail,gContactNo, gAddress)
 {
 	passengerID = pID;
 	strcpy(name, gName);
    strcpy(email, gEmail);
    contactNo = gContactNo;
    strcpy(address, gAddress);
    strcpy (passengerUsername, pUsername);
    strcpy (passengerPassword, pPassword);
    strcpy (passengerNIC, pNIC);
 }
 
 void setPassengerDetails();
   void printPassengerdetails();
 void updatePassengerDetails();
 ~ Passenger();
};
#endif
