#include <iostream>
using namespace std;

int main() {
    int numbers[15] = {17, 89, 23, 4, 67, 12, 45, 78, 34, 56, 91, 28, 6, 83, 39};
    int choice;
    
    cout << "Choose operation (1 = Find largest, 2 = Find smallest): ";
    cin >> choice;
    
    if(choice == 1) {
        int largest = numbers[0];
        for(int i = 1; i < 15; i++) {
            if(numbers[i] > largest) {
                largest = numbers[i];
            }
        }
        cout << "The largest number is: " << largest << endl;
    }
    else if(choice == 2) {
        int smallest = numbers[0];
        for(int i = 1; i < 15; i++) {
            if(numbers[i] < smallest) {
                smallest = numbers[i];
            }
        }
        cout << "The smallest number is: " << smallest << endl;
    }
    else {
        cout << "Please enter 1 or 2 only." << endl;
    }
    
    return 0;
}
