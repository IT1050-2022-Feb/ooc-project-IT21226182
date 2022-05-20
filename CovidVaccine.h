#include<iostream>
#include<cstring>
using namespace std;

class Type{
   protected :
    char pName[20];
    char pAddress[60];
    char pNIC[15];
    char pEmail[20];
    int  pNumber;
    char pDistrict[15];
   
   public:	
    Type(){
     strcpy(pName,"Kamal");
     strcpy(pAddress,"Colombo");
     strcpy(pNIC,"671234567V");
     strcpy(pEmail,"Kdisanayake@gmail.com");
     pNumber = 0771234552 ;
     strcpy(pDistrict,"Colombo");
    	
	}
    void enterPatientDetails();
	void makeOrder();
	
};



class CovidVaccine:public Type{
  private:
  	char vaccineType[10];
  	
  public:
  	CovidVaccine(){
  	 strcpy(pName,"Nimal");
     strcpy(pAddress,"Kurunagela");
     strcpy(pNIC,"947654321V");
     strcpy(pEmail,"Nnimal@gmail.com");
     pNumber = 0713456712 ;
     strcpy(pDistrict,"Kurunegala");
     strcpy(vaccineType,"Pfizer");
  		
	  }
	void enterPatientDetails();
    void selectvaccineType();
	
	
};
 


