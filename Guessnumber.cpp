#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"######## GUESS THE NUMBER ########"<<endl<<endl;
    int g1=0;
    srand(time(0));
    int gnum= rand()% 100+1;
    for(int score=1000;g1!=gnum;score-=20){
        cout<<"Enter Number:";
        cin>>g1;
        if(g1>gnum){
            cout<<"Lower"<<endl;
        }
        else if(gnum>g1){
            cout<<"Higher"<<endl;
        }
        else{
            cout<<"######### BINGO!!! ########"<<endl;
            cout<<"YOUR SCORE IS: "<<score;
            break;
        }
        cout<<endl<<endl;
    }
    return 0;
}