//Author: Christian Orozco
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string input2;
do{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(input == 'A' || input == 'a')
  {
    if(numItems<5){
        cout<< "What is the item?\n";
        cin>>input2;

        list[numItems]=input2;
        numItems++;
        }
    else
    {
        cout<<"You'll need a bgger list!\n";
    }

}
}while(input !='Q' && input!='q');
  return 0;
}
