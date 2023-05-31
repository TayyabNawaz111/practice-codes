#include <iostream>
#include <string>
using namespace std;


class Employee{
	string name;
	int emp_num;
	string hire_date;
public:
	Employee(){
		name = "";
		emp_num = 0;
		hire_date = "";
	}
	Employee(string name, int emp_num, string hireDate){
		this->name = name;
		this->emp_num = emp_num;
		this->hire_date = hireDate;
	}

	void setName(string name){
		this->name = name;
	}

	void setEmp_num(int n){
		this->emp_num = n;
	}

	void setDate(string d){
		this->hire_date = d;
	}

	string getName(){
		return name;
	}
	string getDate(){
		return hire_date;
	}
	int getEmp_num(){
		return emp_num;
	}
	void print(){
		cout << "Name: " << this->getName() << "\nEmployee Number: " << this->getEmp_num() << "\nHire Date: "
			<< this->getDate() << endl;
	}
};




class ProductionWorker :public Employee{
	int shift;
	double hourly_pay_rate;
public:
	void setShift(int shift){
		if (shift == 1)
		{
			this->shift = shift;
			cout << "Day Shift\n";
		}
		else if (shift == 2){
			this->shift = shift;
			cout << "Night Shift\n";
		}
		else{
			cout << "Wrong shift input\n";
			this->shift = 0;
		}
	}
	void setHPR(double x){
		this->hourly_pay_rate = x;
	}
	int getShift(){
		return shift;
	}
	double getHPR(){
		return hourly_pay_rate;
	}
	ProductionWorker(){
		shift = 1;
		hourly_pay_rate = 0;
	}
	ProductionWorker(int shift, double HPR, string name, int emp_num, string hireDate) :
		Employee(name, emp_num, hireDate){
		this->setShift(shift);
		this->hourly_pay_rate = HPR;
	}
	void print(){
		Employee::print();
		cout << "Shift: " << this->getShift() << "\nHourly Pay Rate: " << this->getHPR() << endl;

	}
};
class ShiftSupervisor :public Employee{
	double annual_salary,ap_bonus;
public:
	ShiftSupervisor(){ annual_salary = 0; ap_bonus = 0; }
	void setAS(double s){
		if (s > 0){
			this->annual_salary = s;
		}
		else{
			this->annual_salary = 0;
		}
	}
	void setAB(double b){
		if (b > 0){
			this->ap_bonus = b;
		}
		else{
			this->ap_bonus = 0;
		}
	}
	double getAS(){
		return annual_salary;
	}
	double getAP(){
		return ap_bonus;
	}
	ShiftSupervisor(double annual_salary, double ap_bonus,string n,int num,string d):
		Employee(n,num,d)
	{
		this->setAS(annual_salary);
		this->setAB(ap_bonus);
	}
	
	void display(){
		Employee::print();
		cout << "Annual Salary: " << this->getAS() << "\nAnnual Production Bonus: "
			<< this->getAP() << endl;
	}
};
class TeamLeader :public ProductionWorker{
	double mb;
	int req_training_hours,attended_hours;
public:
	void setRTH(int x){
		req_training_hours = x;
	}
	void setATH(int x){
		attended_hours = x;
	}
	void setMB(double x){ mb = x; }
	int getRTH(){ return req_training_hours; }
	int getATH(){ return attended_hours; };
	double getMB(){ return mb; }
	TeamLeader(double b, int ah, int rh,
		int shift, double HPR, string name, int emp_num, string hireDate)
		:ProductionWorker(shift, HPR, name, emp_num, hireDate){
		setMB(b);
		setATH(ah);
		setRTH(rh);
	}
	TeamLeader(){};
	void print(){
		ProductionWorker::print();
		cout << "Req Training Hr: " << getRTH() << "\nAttended Training Hours: "
			<< getATH()<<"\nMonthly Salary: "<<GetMonthlySal() << endl;
	}
	int GetMonthlySal(){
		return this->getHPR() * 8 * 30*getMB();
	}
};
int main(){
	
	ProductionWorker p(2, 500, "Muhammad Tayyab Nawaz", 1, "30-7-2020");
	cout << "Production Worker:\n";
	p.print();
	cout << "----------------------------------\n";
	ShiftSupervisor s(120000, 4000, "Usama Rasheed", 2439, "12-4-2009");
	cout << "Shift SuperVisor:\n";
	s.display();

	cout << "----------------------------------\n";

	TeamLeader l(500, 40, 40, 1, 50, "Ubaid Athar", 1, "30-7-2020");
	cout << "TeamLeader:\n";
	l.print();
	cout << "----------------------------------\n";

	system("pause");
	return 0;
}