#include <iostream>
#include <String>
using namespace std;
class BankAccount{// a class is a user defined data type which works as a blue print for an object
	private:
	double balance = 10000.0;
	double draw;
	string accountNumber, accountHolderName;
	
	public:
	void deposit(string accnum, string name, double deposit){
		accountNumber = accnum;
		accountHolderName = name;
		balance += deposit;
	}
	void withdraw(string accountnum, string holdername, double with1){
		accountNumber = accountnum;
		accountHolderName = holdername;
		draw = with1;
		if(draw<balance){
			balance -= draw;
		}
		else{
			cout<<"withdrawn amount is more than balance";
		}
	}
	void displayinfo(){
		cout<<"\nAccount Number: "<<accountNumber;
		cout<<"\nAccount Holder Name: "<<accountHolderName;
		cout<<"\nBalance: "<<balance;
	}
		
};
int main(){// demonstrating how the object can used of this class
	BankAccount customer1;
	customer1.deposit("CBIN1234","shourya",5000.0);
	customer1.displayinfo();
	customer1.withdraw("CBIN1234","shourya",4000.0);
	customer1.displayinfo();
}