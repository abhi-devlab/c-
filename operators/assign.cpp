#include <iostream>
using namespace std;

int main(){
 
   int teabags;
   cout<<"enter the numbers of teabags u have:"<<endl;
   cin>>teabags;

   if(teabags<10){
    teabags += 5;
    }
    
     cout<<"updated teabags:"<<teabags<<endl;

    return 0;
}
