#include"Payment.h"
#include<cstring>
class FinanceManager : public Payment{
	protected:
		int financialManagerID;
		char financialManagerName[30];
		int financialManagerContactNo;
		char financialManagerEmail[50];
	public:
		void financeManager();
		void financeManager(int fID,char fName[],int fContactNo,char fEmail[]);
		void setFinanceManagerDetails();
		void displayFinanceManagerDetails();
		~FinanceManager();
};
