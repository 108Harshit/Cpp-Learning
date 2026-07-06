#include <iostream>
using namespace std;
class calcu;
class number{
    int num1,num2;
    friend calcu;
    public:
    void set(int x){
        num1=x;
        }
    void bet(int y){
        num2=y;
        }    
    };
class calcu{
    public:
    int add(const number& o1,const number& o2){
        return o1.num1+o2.num2;
        }
        
    int sub(const number& o1,const number& o2){
        return o1.num1-o2.num2;
        }
        
    int mul(const number& o1,const number& o2){
        return o1.num1*o2.num2;
        }
        
    int div(const number& o1,const number& o2){
        return o1.num1/o2.num2;
        }                            
    };    
int main(){
    while(true){
    char o;
    int p,q;
    number n,m;
    cout<<"Enter no.1 :";
    cin>>p;
    cout<<"Enter no.2 :";
    cin>>q;
    n.set(p);
    m.bet(q);
    cout<<"Enter opretion ";
    cin>>o;
    calcu c;
    
    switch(o){
        case '+':
        cout<<"Add is "<<c.add(n,m);
        break;
        
        case '-':
        cout<<"Subtraction is "<<c.sub(n,m);
        break;
        
        case '*':
        cout<<"Multiply is "<<c.mul(n,m);
        break;
        
        case '/':
        cout<<"Divide is "<<c.div(n,m);
        break;
        }    
    cout<<endl<<endl;
    }
    return 0;
    }