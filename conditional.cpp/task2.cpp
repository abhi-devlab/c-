#include <iostream>
#include <string>
using namespace std;

int main(){
  
    int hour;
    cout<<"enter the current hour (0-23):"<<endl;

    if(hour>=8 && hour<=18){
        cout<<"tea shop is open"<<endl;
    }else{
        cout<<"tea shop is closed"<<endl;

    }

return 0;
}