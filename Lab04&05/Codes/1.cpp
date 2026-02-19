#include <iostream>
using namespace std;
	
class Car{
	private:
		double speed;
	public:
		void setSpeed(double speed){
			this->speed = speed;
		}
		void showSpeed() const{
			cout << "\nSpeed: " << speed << endl;
		}
};

int main(){
	Car c1 , c2;
	
	cout << "\t\t\t\t\t\t\tCar Speeds" << endl;
	c1.setSpeed(30);
	c1.showSpeed();
	c2.setSpeed(90);
	c2.showSpeed();
	
}
