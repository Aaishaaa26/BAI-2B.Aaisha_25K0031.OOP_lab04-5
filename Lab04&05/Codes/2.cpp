#include <iostream>
using namespace std;

class Book{
	private:
		string title;
		double price;
	public:
		
		void setAttributes(string title, double price){
			this->title = title;
			this->price = price;
		}
	
		void display(){
			cout << "Title: " << title << "\nPrice: " << price << endl;
		}
};

int main(){
	Book book[5];
	string title;
	double price;
	
	book[0].setAttributes("Harry Potter", 1200);
	book[1].setAttributes("Clean Code", 1500);
	book[2].setAttributes("C++ Primer", 1800);
	book[3].setAttributes("Data Structures", 1400);
	book[4].setAttributes("Operating Systems", 1600);
	
	for(int i = 0; i < 5; i++){
		cout << "\nBook " << i+1 << ":" << endl;
		book[i].display(); 
	}
}
