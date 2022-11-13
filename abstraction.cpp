#include <iostream>
using std::string; 
using std::cout;

/* 1. abstraction - hiding complex things so that their front end looks simple
2. for eg. - smartphone capturing picture with one button - the complexity is hidden from you
3. some other company has to sign the contract to hide the complex side and provide with the functionality
4. Abstract classes - the class which makes others do the complex work
5. The class that sign the contract will provide the functionality

*/


class AbstractEmployee{
    virtual void AskForPromotion()=0;   // this funcion is a virtual function, this means that other class has to provide functionality for it
                                        // above mentioned reson makes this class and abstract class
};

class Employee:AbstractEmployee {          //here the class Employee has signed the contract, 
                                          //The class that sign the contract will provide the functionality
private: 
    string Name;        
    string Company;  
    int Age;

public:               
    void AskForPromotion(){                 // we implemented the method as per contract

        if(Age>30)
            cout<< Name << " got promoted!" << std::endl;
        else
            cout<< Name << " did not get promoted" << std::endl;
    }
    
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};       

int main()
{
    int number; 
    Employee employee1 = Employee("Tejas", "ARAI", 23);         
    Employee employee2 = Employee("John", "Mahindra",35); 
  
    employee1.AskForPromotion();  //we tested the method
    employee2.AskForPromotion();
}