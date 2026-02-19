#include <iostream>
#include <string>
using namespace std;

class Project{
public:
    string projectTitle;
    int duration;
    
    Project(){
        projectTitle = "None";
        duration = 0;
    }

    Project(string title, int dur){
    	
        this->projectTitle=title;
        this->duration=dur;
    }
};

class Employee{
public:
    string empName;
    float salary;
    Project* project; 

    static float taxRate;

    Employee(string name, float sal, Project* proj){
        this->empName=name;
        this->salary=sal;
        this->project=proj;
    }

    float calculateNetSalary() const{
    	
        float tax = salary*(taxRate/100);
        return salary-tax;
    }

    static void changeTaxRate(float newRate){
        taxRate = newRate;
        cout << "Tax rate updated to " << taxRate << "%" << endl;
    }

    void showInfo() const{
        cout << "Employee : "<< empName << endl;
        cout << "Salary   : " << salary << endl;
        cout <<"Net Salary: " << calculateNetSalary() << endl;
        if (project != NULL)
            cout<< "Project  : " << project->projectTitle <<" (" << project->duration<<" months)" << endl << endl;
    }
};

float Employee::taxRate = 10.0;

int main(){
    Project p1("Banking System", 6);
    Project p2("E-Commerce App", 4);
    Project p3("Student Portal", 3);

    Employee employees[3] =
    {
        Employee("Ahmed",80000,&p1),
        Employee("Zara",65000,&p2),
        Employee("Bilal",72000,&p3)
    };

    cout << "Employee Details" << endl << endl;
    for (int i = 0; i < 3; i++){
        employees[i].showInfo();
    }

    Employee::changeTaxRate(15.0);
    cout << endl << "After Tax Rate Change" << endl << endl;

    for (int i = 0 ; i < 3; i++){
        employees[i].showInfo();
    }

}
