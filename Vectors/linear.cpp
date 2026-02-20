#include<iostream>
#include<vector>
using namespace std;


int linearsearch(vector<int> v, int key){
    for(int i=0; i<v.size(); i++){
        if(v[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>v={1, 2, 3, 4, 5};
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;

    int ans = linearsearch(v, key);
    cout<<"The key is present at index: "<<ans<<endl;
    return 0;
}