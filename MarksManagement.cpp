#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of students :";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<" marks :";
        cin>>marks[i];
        }
        int h=marks[0];
        for(int a=0;a<n;a++){
            for(int i=0;i<n;i++){
                if(marks[i]>marks[a]){
                    h= marks[i];
                    }
                }
            }
            cout<<"Highest Marks :"<<h<<endl;
            int l=marks[0];
            for(int b=0;b<n;b++){
                for(int i=0;i<n;i++){
                if(marks[i]<marks[b]){
                l=marks[i];
                    }
                }
            }
            cout<<"Lowest Marks :"<<l<<endl;
            double s=0;
            for(int i=0;i<n;i++){
                s = s+marks[i];
                    }
                double average=s/n;
                cout<<"Average :"<<average<<endl;    
                
    return 0;
}