#include<iostream>
#include<cstring>
//implementing default constructor for financialManager
void FinanceManager::financialManager(){
	financialMnagerID=0;
	strcpy(financialManagerName,"";
	financialManagerContactNo=0;
	strcpy(financialManagerEmail,"");
}
//implementing parameter constructor for financialManager
void FinaceMnager::financialManager(int fID,char fName[30],int fContactNo,char fEmail[50]){
	financialmanagerID=fID;
	financialMnagerName=fName[30];
	financialManagerContactNo=fContactNo;
	financialManagerEmail=fEmail;
}
void FinanceManager::setFinancialManagerDetails(){
	cout<<"Finance Manager ID:";
	cin>>financialManagerID;
	cout<<"Finance Manager Name:";
	cin>>financialManagerName;
	cout<<"Finance Mnager Contact Number:";
	cin>>financialMnagerContactNo;
	cout<<"Finance Mnager E-mail";
	cin>>financialManagerEmail;
}
void FinanceManager::dispalyFinancialManagerDetails(){
	cout<<"Finance Mnager ID:"<<financialManagerID<<endl;
	cout<<"Finance Manager Name:"<<financialManagerName<<endl;
	cout<<"Finance Manager Contact Number:"<<financialManagerContactNo<<endl;
	cout<<"Finance Manager Email:"<<financialManagerEmail<<endl;
}
void  FinanceManager::~FinanceManager(){
  cout<<"Destructor Runs in the Program"<<endl;
}
