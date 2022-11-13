#include <iostream>
using std::string; 
using std::cout;

/*1. child class or sub class inherits all properties from the super class or parant class or base class 
2.The child also has its own distinct properties
3. cars - electric car, engine car etc.
4. if we try to create object of the child class here developer directly it gives error that it does not have a defaul constructor
   this is because we inherited from a class which has a constructot
5. Now we should create a constructor for the child class 
*/

class AbstractEmployee{
    virtual void AskForPromotion()=0;   
                                        
};

class Employee:AbstractEmployee {          
private: 
    string Name;        
    string Company;  
    int Age;

public:               
    void AskForPromotion(){                 

        if(Age>30)
            cout<< Name << " got promoted!" << std::endl;
        else
            cout<< Name << " did not get promoted" << std::endl;
    }
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
        if (age>=18)             
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

class Developer: Employee{          // developer is child and employee is parent
    public:
        string favProgramminLang;
    

};

int main()
{
    int number; 
    Employee employee1 = Employee("Tejas", "ARAI", 23);         
    Employee employee2 = Employee("John", "Mahindra",35); 

    employee1.AskForPromotion();  
    employee2.AskForPromotion();
}