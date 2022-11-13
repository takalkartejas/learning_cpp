#include <iostream>
using std::string; // to avoid need of std::string everytime
                    
class Employee {    //this class represents only a blueprint to creat a class 
    string Name;    //everything in a class is private by default
    string Company;  
    int Age;
};       // semi colon is essential

int main()
{
    int number; 
    Employee employee1;  //we created an object of the class
}