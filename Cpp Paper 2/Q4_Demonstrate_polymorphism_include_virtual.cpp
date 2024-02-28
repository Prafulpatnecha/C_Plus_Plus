#include<iostream>
using namespace std;

class Vehicle
{
	public:
	virtual void displayDetails()
	{
		cout << "Virtual Define!!";
	}
	
};
class Car : public Vehicle
{
	public:
	void displayDetails()
	{
		cout << "Car" << endl;
		cout << "Car Model : Ford Figo" << endl;
		cout << "Car Speed : 200 Kmh" << endl;
		cout << "Four Seeter And Comfatable Bast For Family Car" << endl;
		cout << "Petrol" <<endl;
		cout << "Contect : 63XXXXXXX" << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	}
};
class Bike:public Vehicle
{
	public:
	void displayDetails()
	{
		cout << "Bike" << endl;
		cout << "Bike Model : Okey Freedam" << endl;
		cout << "Bike Speed : 40 Kmh" << endl;
		cout << "Two Seeter \nElectric" << endl;
		cout << "Dis : 70Km Backup" << endl;
		cout << "Contect : 63XXXXXXX" << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	}
};

int main()
{
	Vehicle *ptr[2];
	Car ca;
	Bike bi;
	ptr[0]=&ca;
	ptr[1]=&bi;
	ptr[0]->displayDetails();
	ptr[1]->displayDetails();
	return 0;
}
//4. Extend the `Vehicle` hierarchy from Question 3 to include a virtual function `displayDetails()`.
// Implement the `displayDetails()` function in each derived class to print information specific to
//  the vehicle. Create an array of `Vehicle` pointers, pointing to objects of different vehicles.
//   Demonstrate polymorphism by calling the `displayDetails()` function for each object.

//3. Define a base class `Vehicle` with private attributes `model` and `speed`. Implement public 
//member functions for setting and getting these attributes. Derive two classes, `Car` and `Bike`,
// from the `Vehicle` class. Implement methods to calculate the time taken for a certain distance
//  based on the speed of each vehicle. Demonstrate abstraction by calling the time calculation
//   methods for both `Car` and `Bike`.
