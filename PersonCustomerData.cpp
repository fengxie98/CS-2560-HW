#include "pch.h"
#include <iostream>

class PersonData
{
	private:
	std::string lastName, firstName, address, city, state,zip, phone;

	public:
	
	void setfirstName(std::string firstName){
		this->firstName = firstName;
		}
		
	std::string getfirstName(){
		return firstName;
	}
	
	void setlastName(std::string lastName){
		this->lastName = lastName;
		}
		
	std::string getlastName(){
		return lastName;
		}
		
	void setAddress(std::string address){
		this->address = address;
		}
		
	std::string getAddress(){
		return address;
		}

	void setCity(std::string city){
		this->city = city;
		}
		
	std::string getCity(){
		return city;
		}
		 
	void setState(std::string state){
		this->state = state;
		}
		
	std::string getState(){
		return state;
		}
		
	void setZip(std::string zip){
		this->zip = zip;
		}
		
	std::string getZip(){
		return zip;
		}
		
	void setPhone(std::string phone){
		this->phone = phone;
		}
		
	std::string getPhone(){
		return phone;
		}

};

class CustomerData : public PersonData
{
	private:
	int customerNumber;
	bool mailingList;

	public:
	
	void setCustomerNumber(int customerNumber){
		this->customerNumber = customerNumber;
		}
		
	int getCustomerNumber(){
		return customerNumber;
		}
		
	void setMailingList(bool mailingList){
		this->mailingList = mailingList;
		}
		
	int getMailingList(){
		return mailingList;
		}

};

int main() {
CustomerData cust;

cust.setCustomerNumber(420);
cust.setMailingList(true);
cust.setlastName("Simpson");
cust.setfirstName("Homer");
cust.setAddress("742 Evergreen Terrace");
cust.setCity("Springfield");
cust.setState("NV");
cust.setZip("89011");
cust.setPhone("939-555-0113");

std::cout<<"Customer Number: "<<cust.getCustomerNumber();
std::cout<<"\nName: "<<cust.getfirstName()<<" "<<cust.getlastName();
std::cout<<"\nAddress: "<<cust.getAddress()<<", "<<cust.getCity()<<", "<<cust.getState()<<" "<<cust.getZip();
std::cout<<"\nPhone Number: "<<cust.getPhone();

return 0;
}