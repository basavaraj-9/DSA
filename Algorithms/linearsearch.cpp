#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the found element
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 25, 30, 45, 50,7,8,20};
    int sz = 9;
    int target = 30;
    int result = linearSearch(arr, sz, target);
    cout<<result<<endl;
    return 0;
}