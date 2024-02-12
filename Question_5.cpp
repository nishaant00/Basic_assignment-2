#include <iostream>

using namespace std;

int main() {
    char char1, char2;
    int ascii1, ascii2, difference;
    
    // Honestly ye question mujhe na smj aya na kar para hu 
    // isliye chat gpt se smj kr ye code kiya hai 
    // can u pls provide this question explanation plss
    cout << "Enter first character: ";
    cin >> char1;
    cout << "Enter second character: ";
    cin >> char2;

    ascii1 = int(char1);
    ascii2 = int(char2);
    
    difference = ascii1 - ascii2;
    
    if (difference < 0) {
        difference = -difference;
    }
    
    cout << "Difference between ASCII codes: " << difference << endl;
    
    return 0;
}