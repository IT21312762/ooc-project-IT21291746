//IT21306518
//Jayasinghe.J.I.B
#include<cstring>
#include "Guest.h"
//defualt constructor for guest class
Guest::Guest()
{
    strcpy(name, "");
    strcpy(email, "");
    contactNo = 0;
    strcpy(address, "");	
}
//Constructors with paramenters for guest class
Guest::Guest(char gName[], char gEmail[], long int gContactNo, char gAddress[])
{
	strcpy(name, gName);
    strcpy(email, gEmail);
    contactNo = gContactNo;
    strcpy(address, gAddress);		
}
