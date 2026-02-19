#include <iostream>
using namespace std;

class Branch{
	
	public:
		string branchName;
		string city;
		
		Branch(string branchName, string city){
			this->branchName = branchName;
			this->city = city;
		}
};

class Account{
	
	string accountHolder;
	int balance;
	Branch *branch;
	
	public:
		static string bankName;
		static double interestRate;
		
		Account(string accountHolder, int balance, Branch * branch){
			this->accountHolder = accountHolder;
			this->balance = balance;
			this->branch = branch;
		}
		
		void showBalance() const{
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;

        if(branch != NULL){
            cout << "Branch: " << branch->branchName
                 << " (" << branch->city << ")" << endl;
        }

        cout << "Bank: " << bankName << endl;
        cout << "Interest Rate: " << interestRate << "%\n\n";
    }
    
    static void updateInterest(double newRate){
    	interestRate = newRate;
	}
};

string Account::bankName = "";
double Account::interestRate = 0.0;

int main(){
	
	Branch b1("Rashid Minhas Road", "Karachi");
	Branch b2("Mission Road" , "Quetta");
	
	Account account[3]{
		Account("Aaisha", 5000, &b1),
		Account("Zainab", 6000, &b2),
		Account("Sumaima", 6000, &b1)
	};
	
	Account::bankName = "HBL";
	Account::interestRate = 3.3;
	
	for(int i = 0; i < 3; i++){
		account[i].showBalance();
	}
	
	Account::updateInterest(3.5);
	
	for(int i = 0; i < 3; i++){
		account[i].showBalance();
	}
}
