#include <iostream>
using std::string; 

/* 1. As you can see the creation of the two employee objects which are commented out requires much time to write 
2. Default constructor:-  if we do not assign the parameters age, company and name to the created objects we get following output-
Name 
Company 
Age -10256
Name 
Company 
Age -10256

This is a doing of default constructor
3. Rules for creating a constructor - i) constructor does not have a return type
    ii) constructor has same name as class
    iii) constructor must be public
4. when we create a constructor we lose the default constructor

*/


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

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};       

int main()
{
    int number; 
    Employee employee1;         //the error is due to removal of default constructor
                                    //As you can see the creation of the two employee objects which are commented out requires much time to write
    // employee1.Age = 25;    
    // employee1.Company = "ARAI" ; 
    // employee1.Name = "Tejas";
    employee1.IntroduceYourself();  

    Employee employee2;  
    // employee1.Age = 23;    
    // employee1.Company = "Mahindra" ; 
    // employee1.Name = "John";
    employee1.IntroduceYourself(); 

}