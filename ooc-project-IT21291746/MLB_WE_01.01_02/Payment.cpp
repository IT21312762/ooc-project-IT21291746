//IT21291746 MADUSHANKA J G N 
#include "Payment.h"
#include <cstring>
//implementation of payment constructor
Payment::Payment(){
  paymentID=0;
  strcpy(cardType,"");
  amount=0.00;
  cardNo=0;
  cvvNo=0;
  strcpy(cardExpDate,"");
}
Payment::Payment(int paymentID,char cType[],double total,int cardNum,int cvvNo,char cardExp[]){
  paymentID=paymentID;
  strcpy(cardType,cType);
  amount=total;
  cardNo=cardNum;
  strcpy(cardExpDate,cardExp);
}
//destructor of payment
Payment::~Payment(){
	
}

