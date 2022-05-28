#include <iostream>
using namespace std;

int main() {
    int x = 100 + 50;   
    int y = x + 20;
    x += y;
    
    cout << (x > y);
    cout << !(x > y);

    return 0;
}