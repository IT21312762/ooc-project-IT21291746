//IT21291746 MADUSHANKA J G N 
#include "Passenger.h"
//Busticket class
class Busticket{
  private:
    char ticketNo[20];
    double ticketAmount;
    int passengerID;
    Passenger *traveller1; //uni directional assosiations.
  public:
    Busticket();
    Busticket(char ticketNum[],double tPrice,int pID);
    void setBusTicketDetails();
    ~Busticket();
};
