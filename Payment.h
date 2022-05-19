//IT21291746 MADUSHANKA J G N 
#include "Busticket.h"
//paymet class
class Payment{
  private:
    int paymentID;
    char cardType[70];
    double amount;
    int cardNo;
    int cvvNo;
    char cardExpDate[20];
    Busticket *busticket;   //Composition Relationship
  public:
    Payment();
    Payment(int paymentID,char cType[],double total,int cardNo,int cvvNo,char cardExp[]);
    void setPaymentDetails();
    void printPaymentDetails();
    ~Payment();
};
