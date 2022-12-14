#include <iostream>
using std::string; 
using std::cout;

/*1. child class or sub class inherits all properties from the super class or parant class or base class 
2.The child also has its own distinct properties
3. cars - electric car, engine car etc.
4. if we try to create object of the child class here developer directly it gives error that it does not have a defaul constructor
   this is because we inherited from a class which has a constructot
5. Now we should create a constructor for the child class 
6.  while creating a constructor for child class we can inherit the properties from the constructor of parent class
7. We cannot access private properties in child class from the parent class, so we use protected 
8. We cannot access methods from parent class directly as the inheritence is private by default see line highlited as no. 8
9. We should make it public to run the method of the parent class
*/

class AbstractEmployee{
    virtual void AskForPromotion()=0;   
                                        
};

class Employee:AbstractEmployee {              
 
public:  
    string Name;        
    string Company;  
    int Age;

    void AskForPromotion(){                 

        if(Age>30)
            cout<< Name << " got promoted!" << std::endl;
        else
            cout<< Name << " did not get promoted" << std::endl;
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

class Developer:public Employee{           // line 8.and 9.
 // developer is child and employee is parent
    public:
        string favProgramminLang;
   // line 4. and 5.
        Developer(string name, string company, int age, string favlang):Employee(name,company,age){ // here we need not to add the previous added properties
            favProgramminLang = favlang;
         }   

         void FixBug(){                     //creating a method in child class
            cout << Name << " fixed the bug using " << favProgramminLang << std::endl;
         }


};

class Teacher:public Employee{           // line 8.and 9.
 // developer is child and employee is parent
    public:
        string Subject;
   // line 4. and 5.
        Teacher(string name, string company, int age, string subject):Employee(name,company,age){ // here we need not to add the previous added properties
            Subject = subject;
         }   

         void PrepareLesson(){                     //creating a method in child class
            cout << Name << " is preparing " << Subject << " leson " << std::endl;
         }


};

int main()
{
    int number; 
    Developer d = Developer("Tejas","ARAI",25,"python");
    d.FixBug();
    d.AskForPromotion();
    Teacher t = Teacher("Bob","cool school",35,"History");
    t.PrepareLesson();
    t.AskForPromotion();

}