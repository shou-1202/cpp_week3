#include <iostream>
#include <string>
using namespace std;
class Car{ //a class is a user defined data type which works as a blue print for an object
	private:
	string brand;
    string model;
	double price;
    int	year; 
	
	
	public:
	static int totalCars;
	
	Car(string carbrand, string ID, double carprice, int caryear){
		brand = carbrand;
		model = ID;
		price = carprice;
		year = caryear;
		totalCars++;
	}
	void displaycarinfo(){
		cout<<"\nCar Model: "<<model;
		cout<<"\nCar Brand: "<<brand;
		cout<<"\nPrice: "<<price;
		cout<<"\nCar Year: "<<year;
	}
};
 int Car::totalCars = 0;

int main(){// demonstrating how the object can used of this class
	Car c1("ABC", "123",450000, 1998);
	Car c2("BCD","124",500000,2000);
	c1.displaycarinfo();
	c2.displaycarinfo();
	cout<<"\nTotal cars: "<< Car::totalCars;
}