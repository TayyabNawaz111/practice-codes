#include <iostream>
#include <string>
using namespace std;
class Vehicle{
	string make, model;
	int year;
	double price;
public:
	Vehicle(string make = "", string model = "",int year = 0, double price = 0){
		this->setMake(make);
		this->setModel(model);
		this->setYear(year);
		this->setPrice(price);

	}
	virtual void displayInfo() = 0; 
	string getMake() const{
		return make;
	}
	string getModel() const{
		return model;
	}
	int getYear() const{
		return year;
	}
	double getPrice()const{
		return price;
	}
	void setMake(string make){
		this->make = make;
	}
	void setModel(string model){
		this->model = model;
	}
	void setPrice(double price){
		if (price > 0)
			this->price = price;
		else
			this->price = 0;
	}
	void setYear(int year){
		this->year = year;
	}
};
class Car :public Vehicle{
	int numDoors;
public:
	void setNumDoor(int numDoor){
		if (numDoor > 0)
			this->numDoors = numDoor;
		else
			this->numDoors = 0;
	}
	int getNumDoors()const{
		return numDoors;
	}
	void displayInfo(){
		cout << "Make: " << this->getMake()
			<< "\nModel: " << this->getModel()
			<< "\nPrice: " << this->getPrice()
			<< "\nYear: " << this->getYear()
			<< "\nDoors: " << this->getNumDoors()
			<< endl;
	}
};
class Truck :public Vehicle {
	string bedSize;
public:
	string getBedSize()const{
		return bedSize;
	}
	void setBedSize(string bedSize){
		this->bedSize = bedSize;
	}
};

int main(){
	system("pause");
	return 0;
}