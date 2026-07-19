#include <iostream>
using namespace std;

//This program is based on virtual function

class Employee
{
protected:
    int empID;
    string name;
    float salary;
public:
    virtual void Input(){
       cout<<"Enter Employee ID: ";
       cin>>empID;
       cout<<"Enter name ";
       cin>>name;
       cout<<"Enter salary: ";
       cin>>salary;
    }

    virtual void bonus()=0;

    virtual void output(){
        cout<<"\n Employee Details:\n";
        cout<<"Employee name is "<<name<<endl;
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

class Manager:public Employee
{
protected:
    int teamSize;
public:
    void Input(){
        cout<<"Enter Employee ID: ";
        cin>>empID;
        cout<<"Enter name ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"Enter Team Size: ";
        cin>>teamSize;
    }
    void bonus(){
        cout<<"Manager "<<name<<" Bonus: "<<salary*0.2<<endl;
    }
    void output(){
        cout<<"\n Manager Details:\n";
        cout<<"Employee name is "<<name<<endl;
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Team Size: "<<teamSize<<endl;
    }
};

class Developer:public Employee
{
protected:
    int projects;
public:
    void Input(){
        cout<<"Enter Employee ID: ";
        cin>>empID;
        cout<<"Enter name ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"Enter no. of Projects: ";
        cin>>projects; 
    }
    void bonus(){
        cout<<"Developer "<<name<<" Bonus: "<<salary*0.1<<endl;
    }
    void output(){
        cout<<"\n Developer Details:\n";
        cout<<"Employee name is "<<name<<endl;
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"No. of Projects: "<<projects<<endl;
    }
};
int main()
{
    Employee* emp[100];

    int option;
for(int i=0;i<100;i++){
    cout<<"\n MENU \n"
        <<"1. Add Manager"<<endl
        <<"2. Add Developer"<<endl
        <<"3. Display All Employees"<<endl
        <<"4. Show Bonuses"<<endl
        <<"5. Exit"<<endl;

        cout<<"What you want to do: ";
        cin>>option;

    switch(option){
        case 1:
        emp[i]= new Manager();
        emp[i]->Input();
        break;

        case 2:
        emp[i]= new Developer();
        emp[i]->Input();
        break;

        case 3:
        for(int b1=0;b1<i;b1++){
            emp[b1]->output();
        }
        break;

        case 4:
        for(int b2=0;b2<i;b2++){
            emp[b2]->bonus();
        }
        break;

        case 5:
        cout<<"Thank You !!"<<endl;
        break;

        default:
        cout<<"ERROR";
        break;
    }
    if(option==5){
        delete[] emp;
        break;
    }
}
    return 0;
}