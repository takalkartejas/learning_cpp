#include <iostream>
using std::string; 
using std::cout;

/* 1. polymorphism - ability of object or method to represent multiple forms. in programing 
2. We create a method in parent class and make it virtual
3. virtual will check if there is a implementation of it in derived classes, if not it will run this implementation
4. If there are different implementation of this in individual child classes- those methods will be implemented
5. We create a pointer of the object of the parent class and store the referenc of the child class in it 
6. we use e->work(); to run the method
7. this can be used to collect data from different types of sensor with only few lines in for loop sensor[i]->sense() and they will gather data 
*/

class AbstractEmployee{
    virtual void AskForPromotion()=0;   
                                        
};

class Employee:AbstractEmployee {              
 
public:  
    string Name;        
    string Company;  
    int Age;

    virtual void Work(){         // virtual will check if there is a implementation of it in derived classes, if not it will run this implementation

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

        void Work(){

            cout<< Name<<" is programming " << std::endl;  //created a work method for developer
         }

        Developer(string name, string company, int age, string favlang):Employee(name,company,age){ 
         }   

         void FixBug(){                     
            cout << Name << " fixed the bug using " << favProgramminLang << std::endl;
         }


};

class Teacher:public Employee{           
 
    public:
        string Subject;

        void Work(){
            cout<< Name<<" is teaching " << std::endl;  //created a work method for teacher
        }
 
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
    
    Employee *e1 = &d; // the pointer of employee will hold the reference of the developer as devloper is deep down inside an employee
    Employee *e2 = &t; 

    e1->Work();
    e2->Work();    // this will work when we make the work method inside parent class vitual


}