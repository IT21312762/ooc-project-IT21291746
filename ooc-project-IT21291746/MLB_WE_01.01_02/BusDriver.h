//IT21306518
//Jayasinghe.J.I.B
#include<cstring>
#ifndef BUSDRIVER_H
#define BUSDRIVER_H
#include "guest.h"
class BusDriver: public Guest {
protected:
 int driverID;
 char driverUsername[15];
 char driverPassword[10];
 char licenseExpDate[10];
 char driverNIC[12];
public:
  BusDriver()
  {
  	driverID = 0;
    strcpy (driverUsername, "");
    strcpy (driverPassword, "");
    strcpy(licenseExpDate, "");
    strcpy (driverNIC, "");
  }
  //Constructors with paramenters for BusDriver class
  BusDriver(char gName[], char gEmail[], long int gContactNo, char gAddress[] ,int bID, char bUsername[], char bPassword[], char licenseDate[],  char bNIC[])
  :Guest(gName,  gEmail, gContactNo,gAddress)
  {
  	driverID = bID;
	strcpy(name, gName);
    strcpy(email, gEmail);
    contactNo = gContactNo;
    strcpy(address, gAddress);
    strcpy (driverUsername, bUsername);
    strcpy (driverPassword, bPassword);
    strcpy(licenseExpDate, licenseDate);
    strcpy (driverNIC, bNIC);
	  }	
 void setBusDriverDetails();
  void printBusDriverDetails();
 void updateBusDriverDetails();
 ~ BusDriver();
};
#endif