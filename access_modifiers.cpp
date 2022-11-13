#include <iostream>
using std::string; 

/* 1. three types of access modifiers - private, public and protected 
   2. By default it is always private
   */              

class Employee {  
public:              
    string Name;    
    string Company;  
    int Age;
};       

int main()
{
    int number; 
    Employee employee1;  
    employee1.Age = 25;    // we are able to access the members of the class now as the access modifier is public
    employee1.Company = 'ARAI';
    employee1.Name = 'Tejas';
}