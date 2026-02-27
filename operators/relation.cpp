#include<iostream>
using namespace std;

int main(){
    int cups;

    cout<<"enter the number of cups you have";
    cin>>cups;

    if(cups>=20){
        cout<<"congo youwill have gold batch"<<endl;
    }else if(cups>10 && cups<20){
        cout<<"you will have silver batch"<<endl;
    }else{
        cout<<"bas ho gya saman uthao nakhre nahi"<<endl;
    }
}