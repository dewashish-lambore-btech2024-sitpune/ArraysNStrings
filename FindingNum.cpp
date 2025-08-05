#include <iostream>
using namespace std;

int main() {
    int data[15] = {7, 23, 91, 45, 12, 8, 34, 67, 19, 52, 6, 88, 31, 74, 15};
    int size = 15;
    int search_value;
    bool located = false;
    int index_found = -1;
    
    cout << "Enter a number to find: ";
    cin >> search_value;
    
    for(int i = 0; i < size; i++) {
        if(search_value == data[i]) {
            located = true;
            index_found = i;
            break;
        }
    }
    
    if(located) {
        cout << "Number " << search_value << " found at index " << index_found << endl;
    } else {
        cout << "Number " << search_value << " not found in the array" << endl;
    }
    
    return 0;
}
