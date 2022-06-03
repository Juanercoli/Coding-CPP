#include <iostream>
#include <string>

int main() {

    // Declaration and assignation

    //string cars[4];
    std::string cars[4] = {"BWM", "Volvo", "Ford", "Mazda"};
    cars[0] = "LOL"; // --> cars[0] == "LOL"

    // Loop through array
    for (int i = 0; i < 4; i++) {
        std::cout << cars[i] << '\n';
    }
    
    // You can omit array size
    // If you don't then array will only be as big as
    // The quantity of elements
    int numbers[] = {1, 2, 3, 4, 5}; // Size of array is 4
    
    // size of array is 5, even though it's only three elements inside it
    //std::string cars[5] = {"Volvo", "BMW", "Ford"}; 

    // To get size of vector 
    std::cout << "Size is:" << sizeof(numbers)/sizeof(int) << '\n';

    // N-dimensional arrays
    std::string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    std::cout << letters[0][2];  // Outputs "C"

    return 0;
}