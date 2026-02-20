#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl;

    cout<<"the front element of vector: "<<v.front()<<endl;
    cout<<"the back element of vector: "<<v.back()<<endl;
    cout<<"the element at index 2: "<<v.at(2)<<endl;
    return 0;
}