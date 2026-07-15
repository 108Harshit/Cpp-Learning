#include <iostream>
using namespace std;

class Student{
    string name;
    int roll,marks;
    static int h,s2;
    public:
    void set(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Roll no.:";
        cin>>roll;
        cout<<"Enter marks:";
        cin>>marks;
    }

    void studentdisplay(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
    static void search(Student *s,int n){
        for(int s1=0;s1<n;s1++){
            if(s[s1].marks>h){
                h=s[s1].marks;
                s2=s1;
            }
        }
        cout<<"\nTopper of the class is\n";
        s[s2].studentdisplay();
}
};
int Student::h=-1;
int Student::s2=0;
void display(Student *s,int n){
    cout<<"\n Detials of all students \n";
    for(int d1=0;d1<n;d1++){
        cout<<"Student "<<d1+1<<" detials\n";
        s[d1].studentdisplay();
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    Student *s= new Student[n];
    for(int i=0;i<n;i++){
        cout<<"Detials of Student "<<i+1<<" :"<<endl;
        s[i].set();
        cout<<endl;
    }
    cout<<endl;
    Student::search(s,n);
    display(s,n);
    delete[] s;
    return 0;
}
