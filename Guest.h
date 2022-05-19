#ifndef GUEST_H
#define GUEST_H

class Guest{
protected:
char name[30];
char email[30];
long int  contactNo;
char address[30];
public:
  Guest();
  Guest(char gName[], char gEmail[], long int gContactNo, char gAddress[]);
  void Register();
};
#endif
