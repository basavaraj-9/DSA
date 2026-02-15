//Write a c++ program to print the oating point value.
//Input Format 
//Input consists of one integer
//Output Format 
//Output consists of foating point values with precisions
//Sample Input 
//5.374675 
//Sample Output 
//5.375
//5.37
//5.4

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num;

    cout<<"Enter a float value:";
    cin>>num;
    cout<<"You entered: "<<num<<endl;
    cout<<"fixed: "<<setprecision(2)<<fixed<<num<<endl; 
    cout<<"fixed: "<<setprecision(1)<<fixed<<num<<endl;    
    return 0;
}