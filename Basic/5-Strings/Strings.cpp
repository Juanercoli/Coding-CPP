#include <iostream>     
#include <string>       // Include string library
using namespace std;

int main() {
    string firstName = "Juan";
    string lastName = "Ercoli";

    // String concatenation 
    string fullName = firstName + " " + lastName;

    cout << fullName << '\n'; 

    // A string is an object in C++ 

    // Append method
    fullName = firstName.append(" ");
    fullName = fullName.append(lastName);

    cout << fullName << '\n';

    // Length method 
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // You can use size() or length() they're the same 
    // size() is just an alias of length()
    cout << "The lenght of txt is: " << txt.length() << '\n';

    // Access strings
    string hello = "Hello";
    hello[0] = 'J';
    cout << hello << '\n';

    // Read strings
    cin >> fullName;        // cin considers a space as a terminating character
    getline(cin, fullName); // function to read a line of text (read strings correctly) 
    return 0;
}