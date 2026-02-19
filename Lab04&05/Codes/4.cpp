#include <iostream>
using namespace std;

class Engine{
	private:
		int horsepower;
	public:
		Engine(int horsepower = 0){
			this->horsepower = horsepower;
		}
		int getHorsePower() const{
			return horsepower;
		}
};

class Car{
	private:
		string model;
		Engine engine;
	public:
		Car(string model, int horsepower) : engine(horsepower){
			this->model = model;
		}
		
		void showDetails() const{
			cout << "\nCar Model: " << model << "\nHorse Power: " << engine.getHorsePower() << endl;
		}
};

int main(){
	Car c1("Corolla", 180);
	c1.showDetails();
}
