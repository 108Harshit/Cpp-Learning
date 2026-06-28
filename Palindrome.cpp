#include <iostream>
using namespace std;

void par(int x){
    
    int w=x;
    int z=0;
    while(w!=0){
        z=(w%10)+(z*10);
        w=w/10;
        }
     if(x==z){
        cout<<"Palindrome";
         }
     else{
        cout<<"Not Palindrome";
         }       
         
    }
int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;
    par(a);
    
    return 0;
}