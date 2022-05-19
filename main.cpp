#include<iostream>
#include<cstring>
#include "Payment.cpp"
#include "Busticket.cpp"
#include "Administrator.cpp"
#include "Report.cpp"
#include "Bus.cpp"
#include "Financemanager.cpp"
#include "Guest.cpp"
#include "Passenger.cpp"
#include "BusDriver.cpp"
using namespace std;


//main programm
int main(){
	Payment *p1 = new Payment();
	Busticket *Bt1 = new Busticket();
	Passenger *traveller1= new Passenger();
	Guest *g1 = new Guest();
	BusDriver *driver1= new BusDriver();
	Administrator *a1 = new Administrator();
	Report *r1 = new Report();
	Bus*b1=new Bus();
	FinanceManager *f1=new FinanceManager;
	
	return 0;
}