//WAF to swap the minimum and maximum elements in an array. write a function
#include<iostream>  
using namespace std;
void swapMinMax(int arr[], int size) {
    int minIndex = 0, maxIndex = 0;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    
    // Swap the minimum and maximum elements
    swap(arr[minIndex], arr[maxIndex]);
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    swapMinMax(arr, size);
    
    cout << "\nArray after swapping min and max: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}