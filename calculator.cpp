#include <iostream>
using namespace std;

int main() {
  int number1, number2;
  cout<<"Enter the first number: \n";
  cin>>number1;
  cout<<"Enter the second number: \n";
  cin>>number2;
int operation;
  cout<<"Choose an operation: \n";
  cout<<"1- Addition.\n";
  cout<<"2- Substraction.\n";
  cout<<"3- Multiplication.\n";
  cout<<"4- Division.\n";

  cin>> operation;

  if(operation == 1){
    cout<<"Result is "<< number1 + number2;
  }
  if(operation == 2){
    cout<<"Result is "<< number1 - number2;
  } 
  if(operation == 3){
    cout<<"Result is "<< number1*number2;
  }
  if(operation == 4){
    cout<<"Result is "<< number1/number2;
  }
}
