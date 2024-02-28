#include<iostream>
using namespace std;

class Vehicle
{
	protected:
	string model;
	float speed;
	float time;
	float distance;
	public:
		virtual void calculate() = 0;
		void setting()
		{
			cout << "Enter Model Name : ";
			getline(cin,model);
			cout << "Enter Speed : ";
			cin >> speed;
		}
		void getting()
		{
			cout << "-------------------------------------------------------" << endl;
			cout << "Your Model : " << model << endl;
			cout << "Your Speed : " << speed << endl;
			cout << "Your Distance : " << distance << endl;
			cout << "Your Time : " << time << " Min" << endl;
			cout << "-------------------------------------------------------" << endl;
		}
};
class Car: public Vehicle
{
	public:
//		time=distance/speed
//		time=time*60;
		void calculate()
		{
			cout << "Car" << endl;
			cout << "Enter Distance : ";
			cin >> distance;
			time=distance/speed;
			time=time*60;
			cout << endl;
			cin.ignore();
		}
};
class Bike: public Vehicle
{
	public:
		void calculate()
		{
			cout << "Bike" << endl;
			cout << "Enter Distance : ";
			cin >> distance;
			time=distance/speed;
			time=time*60;
			cin.ignore();
		}
};

int main()
{
	Car car1;
	Bike bike1;
	car1.setting();
	car1.calculate();
	bike1.setting();
	bike1.calculate();
	car1.getting();
	bike1.getting();
	return 0;
}
//3. Define a base class `Vehicle` with private attributes `model` and `speed`. Implement public 
//member functions for setting and getting these attributes. Derive two classes, `Car` and `Bike`, 
//from the `Vehicle` class. Implement methods to calculate the time taken for a certain distance 
//based on the speed of each vehicle. Demonstrate abstraction by calling the time calculation 
//methods for both `Car` and `Bike`.
