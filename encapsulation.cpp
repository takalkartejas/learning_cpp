#include <iostream>
using std::string; 

/* 1. encapsulation - to prevent anyone or anything(other classes) outside the class to directly modify our data
2. We provide very specific methods to allow modification of our data -getters and setters
3. This methods should be public
*/

class Employee { 
private: 
    string Name;        //we made the data private
    string Company;  
    int Age;

public:               
    void setName(string name) {               // setter to set the value of Name
        Name = name;   
    }
    string getName(){                        // getter will return the name
        return Name;
    }
    void setCompany(string company) {               
        Company = company;   
    }
    string getCompany(){                        
        return Company;
    }
    void setAge(int age) {               
        Age = age;   
    }
    int getAge(){                        
        return Age;
    }

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
    Employee employee1 = Employee("Tejas", "ARAI", 23);       
    employee1.IntroduceYourself();  

    Employee employee2 = Employee("John", "Mahindra",23);
    employee1.IntroduceYourself(); 

}