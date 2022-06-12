#include <iostream>
#include<string>
using namespace std;

int main() {

    // REFERENCES

    //string food = "Pizza";  
    //string &meal = food;   // Reference variable to existing variable

    //cout << food << "\n";  // Outputs Pizza
    //cout << meal << "\n";  // Outputs Pizza
    //cout << &food;         // Outputs MEMORY ADDRESS


    // POINTER
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
}   