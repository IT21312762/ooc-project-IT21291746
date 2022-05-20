#include"BusDriver.h"
#include<cstring>
class Bus:public BusDriver{
	protected:
		char busNo[10];
		char busType[20];
		int noOfSeats;
	public:
		void BusDetails();
		void BusDetails(char pbusNo[],char pbusType[],int pnoOfSeats);
		void setBusDetails();
		void displayBusDetails();
		void updateBusDetails();
		~Bus();
};
