#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Number of students:";
    cin>>size;
    cin.ignore();
    string *name= new string[size];
    int *roll= new int [size];
    float *marks= new float [size];
    for(int i=0;i<size;i++){
        cout<<"Name of student "<<i+1<<" :";
        getline(cin,name[i]);
        cout<<"Roll no.:";
        cin>>roll[i];
        cout<<"Enter marks:";
        cin>>marks[i];
        cin.ignore();
        cout<<endl;
    }
    cout<<"\nStudent Details:\n";
    for(int i=0;i<size;i++){
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Roll no.:"<<roll[i]<<endl;
        cout<<"Marks:"<<marks[i]<<endl;
        cout<<endl;
    }
    delete[] name;
    delete[] roll;
    delete[] marks;
    return 0;
}