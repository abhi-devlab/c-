#include <iostream>
#include <string>
using namespace std;

int main(){

    string userTea;

    int teaquantity;

    cout<<"what would you like to order in tea? \n";

    getline(cin, userTea);


  //ask for the quantity

  cout<<"how many cups of "<< userTea << "would you like to have?";

  cin >> teaquantity;

  cout << teaquantity;
  cout << userTea;


    return 0;
}