//Author: Christian Orozco
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
 vector<string> list; 
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
        cout<< "What is the item?\n";
        cin>>input2;

    if(numItems>=0){

        list[numItems]=input2;
        numItems++;
        }

}

}while(input !='Q' && input!='q');
if(list.size() !=0)
{
cout<<"==ITEMS TO BUY==\n";

for(int i=0;i<=list.size();i++)
{

cout<<i+1;
cout<<" "<<list[i]<<endl;
}
}
else
{
cout<<"No items to buy!\n";
return 0;
}
return 0;
}


