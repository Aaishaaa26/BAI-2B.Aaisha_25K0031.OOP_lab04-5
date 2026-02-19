#include <iostream>
using namespace std;

class BankAccount{
	private:
		static float interestRate;
	
	public:
	
	static void changeRate(float rate){
	    interestRate = rate;
	}
	void display(){
		cout << "\nInterest Rate :" << interestRate <<endl;
	}	
};

float BankAccount :: interestRate = 3.0;

int main(){
	BankAccount i1, i2, i3;
	
	i1.display();
	i2.display();
	i3.changeRate(7.0);
	i1.display();
	
}
