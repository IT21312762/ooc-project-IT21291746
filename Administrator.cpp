#include "Administrator.h"
#include <cstring>
Administrator::Administrator(){
	
}
void Administrator::setadminDetails(int aID,char aName,int aContactNo,char aEmail){
	adminID = aID;
	adminName = aName;
	adminContactNo = aContactNo;
	adminEmail = aEmail;
}
void Administrator::displayadminDetails()
{
	cout<< "admin ID= "<<adminID<<endl;
	cout    <<"admin name="<<adminName<<endl;
	 cout  <<"admin contact No="<<adminContactNo<<endl;
	cout   <<"admin Email="<<adminEmail<<endl;
}
