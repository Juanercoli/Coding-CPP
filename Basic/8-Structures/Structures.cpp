#include <iostream>
#include <string>

struct {                     // Structure declaration
    int myNum;               // Member (int variable)
    std::string myString;    // Member (string variable)
} myStruct1, myStruct2;               // Structure variables

// Named structure
// You can treat it as a data type
struct myDataType {
    int myNum;
    std::string myString;
};

int main() {
    // Assign values to members of myStruct1 and myStruct2
    myStruct1.myNum = 1;
    myStruct1.myString = "Hello";

    myStruct2.myNum = 2;
    myStruct2.myString = "World";

    std::cout << myStruct1.myString << " " << myStruct2.myString << '\n';

    myDataType myVar;
}