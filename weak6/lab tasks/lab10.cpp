#include<iostream>
using namespace std;
int main(){
    string name;
    string reverse;
    cout<<"Enter any String : ";
    getline(cin, name);
    int total=name.length();
    for(int x=total; x>=0; x--){
        cout<<name[x];
    }
}