#include <iostream>
#include <string>
using namespace std;
class Vehicle{
	string make, model;
	int year;
	double price;
public:
	//Constructor
	Vehicle(string make = "", string model = "", int year = 0, double price = 0){
		this->setMake(make);
		this->setModel(model);
		this->setYear(year);
		this->setPrice(price);

	}
	//pure virtual function
	virtual void displayInfo() = 0;
	//getter
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
	//setter
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
	//destructor
	//virtual ~Vehicle(){ cout << "Vehicle destructed\n"; };
};
class Car :public Vehicle{
	int numDoors;
public:
	//setter
	void setNumDoor(int numDoor){
		if (numDoor > 0)
			this->numDoors = numDoor;
		else
			this->numDoors = 0;
	}
	//getter
	int getNumDoors()const{
		return numDoors;
	}
	//overriding
	void displayInfo(){
		cout << "Make: " << this->getMake()
			<< "\nModel: " << this->getModel()
			<< "\nPrice: " << this->getPrice()
			<< "\nYear: " << this->getYear()
			<< "\nDoors: " << this->getNumDoors()
			<< endl;
	}
	Car(string make = "", string model = "", int year = 0, double price = 0, int numDoors = 0)
		:Vehicle(make, model, year, price){

	}
	//destructor 
	//virtual ~Car(){ cout << "Car destructed\n"; };

};
class Truck :public Vehicle {
	string bedSize;
public:
	//getter
	string getBedSize()const{
		return bedSize;
	}
	//setter
	void setBedSize(string bedSize){
		this->bedSize = bedSize;
	}
	//Constructor
	Truck(string make = "", string model = "", int year = 0, double price = 0, string bedSize = "") :Vehicle(make, model, year, price){
		this->setBedSize(bedSize);
	}
	//overriding
	void displayInfo(){
		cout << "Make: " << this->getMake()
			<< "\nModel: " << this->getModel()
			<< "\nPrice: " << this->getPrice()
			<< "\nYear: " << this->getYear()
			<< "\nBed Size: " << this->getBedSize() << endl;
	}
	//destructor
	//~Truck(){ cout << "Truck destructed\n"; };

};
class Motorcycle :public Vehicle {
	double engineSize;
public:
	//setter
	void setEngineSize(double engineSize){
		if (engineSize > 0)
			this->engineSize = engineSize;
		else
			this->engineSize = 0;
	}
	//getter
	double getEngineSize()const{
		return engineSize;
	}
	//constructor
	Motorcycle(string make = "", string model = "", int year = 0, double price = 0, double engineSize = 0) :Vehicle(make, model, year){
		this->setEngineSize(engineSize);
	}
	//overriding
	void displayInfo(){
		cout << "Make: " << this->getMake()
			<< "\nModel: " << this->getModel()
			<< "\nPrice: " << this->getPrice()
			<< "\nYear: " << this->getYear()
			<< "\nEngine Size: " << this->getEngineSize() << endl;
	}
	//destructor
	// ~Motorcycle(){ cout << "Motorcycle destructed\n"; };

};

int main(){




	system("pause");
	return 0;
}