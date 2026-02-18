//WAF to print all unique elements in an array. write a function
#include<iostream>  
using namespace std;
void printUniqueElements(int arr[], int size) {
    cout << "Unique elements in the array: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    
    printUniqueElements(arr, size);
    
    return 0;
}