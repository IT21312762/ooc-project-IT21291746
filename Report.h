class Report {
  private:
    int reportID;
    char reportName[20];
    char reportDate[10];
  public:
	Report();
	Report(int rID,char rName,char rDate);
    setreportDetails();
    displayreport(Administrator*r);
	~Report();
};
