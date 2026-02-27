#include <iostream>
using namespace std;

int main(){
    bool isStudent;
    int cups;
    cout<<"are you a student? (1 for yes and 0 for no)"<<endl;
    cin>>isStudent;
    cout<<"how many cups of tea have you purchased ?"<<endl;
    cin>> cups;

    if(isStudent || cups>15){
        cout<<"youare eligible for discount"<<endl;
    }else{
        
        cout<<"youare eligible for discount"<<endl;
    }

    return 0;
}