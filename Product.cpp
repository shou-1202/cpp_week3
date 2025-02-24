#include <iostream>
#include <string>
using namespace std;
class Product{ //a class is a user defined data type which works as a blue print for an object
	private:
	string productID;
    string productName;
	double price, totalPrice;
    int	quantity; 
	
	public:
	Product(string Name, string ID, double productprice, double productquantity){
		productName = Name;
		productID = ID;
		price = productprice;
		quantity = productquantity;
		totalPrice = price*quantity;
	}
	void productDetails(){
		cout<<"\nProduct ID: "<<productID;
		cout<<"\nProduct Name: "<<productName;
		cout<<"\nPrice: "<<price;
		cout<<"\nQuantity: "<<quantity;
		cout<<"\nTotal Price: "<<totalPrice;
	}
		
};
void displaycart(Product arr[], int size){
		if(size==0){
			cout<<"Your Cart is Empty";
		}
		else{
			for(int i= 0;i<size;i++){
				arr[i].productDetails();
			}
		}
}

int main(){// demonstrating how the object can used of this class
    const int n = 2;
	Product cart[n] = {
		Product("Kitchen Bowl", "A123", 150, 6),
		Product("Serving Spoon", "A124", 165, 2)
	};
	displaycart(cart, n);
}