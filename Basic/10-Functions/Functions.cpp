#include <iostream>
using namespace std;

void myFunction(); // Declaration

int main() {
  myFunction(); // call the function
  return 0;
}

// Create a function
void myFunction() {  // Definition
  // Body of the function
  cout << "I just got executed!";
}

// Outputs "I just got executed!"