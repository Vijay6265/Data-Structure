#include <iostream>

using namespace std;

void onceFunction() {
    static bool called = false;  // Static variable to track if the function has been called

    if (!called) {
        cout << "Function is executing for the first time!" << endl;
        called = true;  // Set to true after the first call
    } else {
        cout << "Function has already been called." << endl;
    }
}

int main() {
    onceFunction();  
    onceFunction();  // Output: Function has already been called.
    onceFunction();  // Output: Function has already been called.

    return 0;
}
