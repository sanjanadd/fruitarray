#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring an array of 5 fruits
    string fruits[5] = {"Apple", "Banana", "Cherry", "Grape", "Orange"};
    
    // Printing original list using a range-based for loop
    cout << "Here are the fruits in the list:" << endl;
    for (string fruit: fruits) {
        cout << fruit << endl;
    }

    // Prompting user to add two more fruits
    cout << "\nBonus: Add two more fruits!" << endl;
    
    string newFruit1, newFruit2; // Variables to store user input
    cout << "Enter a new fruit: ";
    cin >> newFruit1;
    cout << "Enter another fruit: ";
    cin >> newFruit2;

    // Declaring an array of 7 fruits
    string updatedFruits[7] = {"Apple", "Banana", "Cherry", "Grape", "Orange", newFruit1, newFruit2};
    
    // Printing updated list
    cout << "\nUpdated list of fruits:" << endl;
    for (string updatedFruit: updatedFruits) {
        cout << updatedFruit << endl;
    }

    return 0;
}