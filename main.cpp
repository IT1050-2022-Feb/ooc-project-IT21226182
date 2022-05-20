#include<iostream>
#include<cstring>
#include<CovidVaccine.h>
#include<Customer.h>

using namespace std;
int main(){
	CovidVaccine v1;
	v1.enterPatientDetails();
	v1.selectvaccineType();
	
	Customer c1;
    c1.displayCustomer();
    c1.giveFeedback(Type *t);
	
	return 0;
}
