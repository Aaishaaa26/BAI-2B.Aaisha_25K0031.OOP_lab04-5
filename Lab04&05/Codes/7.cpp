#include <iostream>
using namespace std;

class Account{
	string accountHolder;
	double balance;
	
	public:	
	
	static string bankName;
	static double interestRate;
	
	Account(string accountHolder, double balance){
		this->accountHolder = accountHolder;
		this->balance = balance;
	}
	
	void deposit(double amount){
		balance += amount;
	}
	
	void display() const{
		cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Bank: " << bankName << endl;
        cout << "Interest Rate: " << interestRate << "%\n";
	}
};

string Account::bankName = "HBL";
double Account::interestRate = 3.0;

int main(){
	Account a1("Aaisha", 700);
	Account a2("Zainab", 1200);
	
	a1.display();
	a2.display();
	a1.deposit(700);
	
	cout << "\nChange in Interest Rate\n";
	Account::interestRate = 3.5;
	
	a2.deposit(300);
	a1.display();
	a2.display();
	
	

}
