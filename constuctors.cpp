#include <iostream>
using std::string; 




class Employee {  
public:              
    string Name;    
    string Company;  
    int Age;

    void IntroduceYourself(){                          
        std::cout << "Name " << Name <<std::endl;
        std::cout << "Company " << Company <<std::endl;
        std::cout << "Age " << Age <<std::endl;
    }
};       

int main()
{
    int number; 
    Employee employee1;  
    employee1.Age = 25;    
    employee1.Company = "ARAI" ; 
    employee1.Name = "Tejas";
    employee1.IntroduceYourself();  

    Employee employee2;  
    employee1.Age = 23;    
    employee1.Company = "Mahindra" ; 
    employee1.Name = "John";
    employee1.IntroduceYourself(); 

}