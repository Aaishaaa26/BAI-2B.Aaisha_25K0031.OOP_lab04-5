#include <iostream>
using namespace std;

class Department{
	string d_name;
	string d_code;
	
	public:
		Department(string d_name , string d_code) {
			this->d_name = d_name;
			this->d_code = d_code;
		}
		
		string getName() const{
			return d_name;
		}
		string getCode() const{
			return d_code;
		}
};

class Student{
	string name;
	int age;
	Department depart;
	
	public:
		Student(string name, int age, string d_name, string d_code) : depart(d_name, d_code){
			this->name = name;
			this->age = age;
		}
		
		void showDetails() const{
			cout << "\nStudent Name: " << name << endl;
			cout << "Student Age: " << age << endl;
			cout << "Department Name: " << depart.getName() << endl;
			cout << "Department Code: " << depart.getCode() << endl;
		}
};

int main(){
	Student students[3] = {
	    Student("Ali", 20, "Computer Science", "CS101"),
        Student("Sara", 21, "Software Engineering", "SE102"),
        Student("Usman", 19, "Information Tech", "IT103")
    };
    
    for(int i = 0; i < 3; i++){
    	students[i].showDetails();
	}
}
