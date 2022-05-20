#include<iostream>
using namespace std;

class Customer{
	
 private:
		
	char customerID[20];
	char Cname[20];
	int mobileNumber;
	char UserName[20];
	char email[20];
	char password[20];
	Type *types[SIZE];	
	
 public:
	Customer();
	Customer(char cID[20],char Name[20],int mNum,char uName[20],char Email[20], char pWord[20]);
	void displayCustomer();
	void giveFeedback(Type *t);
	
};

class Type{
	
  protected:
	
   char pName[20];
   char pAddress[20];
   char pNIC[20];
   char pEmail[20];
   int pNumber;
   char pDistrict[20];
   Customer *cus;
   
   public:	
    Type(char name[20],char pAd[20],char NIC[20],char email[20],int pNum,char pDist[20],Customer *c);
    void enterPatientDetails();
    void makeOrder();
	
	
};


