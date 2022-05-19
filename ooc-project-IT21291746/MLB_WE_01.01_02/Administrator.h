//IT21344510 Sahnas M.J.F
class Administrator{
	private:
		int adminID;
		char adminName;
		int adminContactNo;
		char adminEmail;
		
	public:
        Administrator();
	  	Administrator(int aID,char aName,int aContactNo , char aEmail);       
		void setadminDetails(int aID,char aName,int aContactNo, char aEmail);
		void displayadminDetails();
  		~Administrator ();
