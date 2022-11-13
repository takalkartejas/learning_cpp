#include <iostream>
using std::string; 
using std::cout;

/* 1. polymorphism - ability of object or method to represent multiple forms. in programing 
2.
*/

class AbstractEmployee{
    virtual void AskForPromotion()=0;   
                                        
};

class Employee:AbstractEmployee {              
 
public:  
    string Name;        
    string Company;  
    int Age;

    void Work(){

        cout<< Name<<" is checking email, performing tasks " << std::endl;  //created a work method 
    }

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

class Developer:public Employee{           
 
    public:
        string favProgramminLang;
        Developer(string name, string company, int age, string favlang):Employee(name,company,age){ 
         }   

         void FixBug(){                     
            cout << Name << " fixed the bug using " << favProgramminLang << std::endl;
         }


};

class Teacher:public Employee{           
 
    public:
        string Subject;
 
        Teacher(string name, string company, int age, string subject):Employee(name,company,age){ 
            Subject = subject;
         }   

         void PrepareLesson(){                     
            cout << Name << " is preparing " << Subject << " leson " << std::endl;
         }


};

int main()
{
    int number; 
    Developer d = Developer("Tejas","ARAI",25,"python");
    Teacher t = Teacher("Bob","cool school",35,"History");
    t.Work();
    d.Work();


}