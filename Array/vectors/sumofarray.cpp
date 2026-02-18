//WAF to calculate the sum of all the elements in an array.
#include<iostream>
using namespace std;
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int sum = sumOfArray(arr, size);
    cout<<"Sum of array is: "<<sum<<endl;
    return 0;
}