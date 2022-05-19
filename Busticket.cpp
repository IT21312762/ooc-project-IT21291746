//IT21291746 MADUSHANKA J G N 
#include "Busticket.h"
#include <cstring>
//implemetation of busticket constructor
Busticket::Busticket(){
	strcpy(ticketNo,"");
    ticketAmount=0.00;
    passengerID=0;
}
Busticket::Busticket(char ticketNum[],double tPrice,int pID){
	strcpy(ticketNo,ticketNum);
    ticketAmount=tPrice;
    passengerID=pID;
}
//destructor of busticket
Busticket::~Busticket(){
	
}
