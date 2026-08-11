#include<iostream>
using namespace std;

int main() {
  int * ptr;
  ptr = new int ;
  cout << "Enter an integer";
  cin>> * ptr;

  cout << "Value ="<< *ptr<< endl;

  delete ptr ;
  return 0;

  
}