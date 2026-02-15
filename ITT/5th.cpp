#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int num ;
    cout<<"Enter an integer:";
    cin>>num;

    float float_result = static_cast<float>(num);
    cout<<fixed<<setprecision(1)<<float_result<<endl;
    cout<<"The float value of "<<num<<" is "<<float_result<<endl;

    return 0;
}