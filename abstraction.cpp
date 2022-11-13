#include <iostream>
using std::string; 
using std::cout;

/* 1. abstraction - hiding complex things so that their front end looks simple
2. for eg. - smartphone capturing picture with one button - the complexity is hidden from you
3. some other company has to sign the contract to hide the complex side and provide with the functionality

*/

class Employee { 
private: 
    string Name;        
    string Company;  
    int Age;

public:               
    void setName(string name) {               
        Name = name;   
    }
    string getName(){                       
        return Name;
    }
    void setCompany(string company) {               
        Company = company;   
    }
    string getCompany(){                        
        return Company;
    }
    void setAge(int age) {   
        if (age>=18)             /
        Age = age ;  
        else
        cout << "less than 18 not allowed" << std::endl;
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

    employee1.setAge(17);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " year old";  

}