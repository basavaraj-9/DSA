#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>v;
    v.push_back('H');
    v.push_back('A');
    v.push_back('R');   
    v.push_back('S');
    v.push_back('H');
    v.push_back('I');

    for (char i: v){
        cout<<i<<" ";
    }
    cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl;
    return 0;
}