//Author:Andrew Gilbert
#include<iostream>

using std::cin;
using std::cout;
using std::endl;



int main()
{
  //declare variables here
    int first = 0;
    int second = 0;
    int biggest = 0;
           
   


  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
    std::cin>>first;    
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
     std::cin>>second;

  //determine if first or second is bigger and store that in a third variable
    if(second > first )
            cout<<"Of those two numbers, the biggest is: "<<second<<endl;


  //print out the variable representing the biggest number
   if( first > second ) 
           cout<<"Of those two numbers, the biggest is: "<<first<<endl;

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
