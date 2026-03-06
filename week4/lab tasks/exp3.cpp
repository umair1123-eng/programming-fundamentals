#include<iostream>
using namespace std;
main(){
    string name;
    cout<<"Enter your Name : ";
    cin>> name;
    if (name=="umair"){
        cout<<"wellcome : "<<name;
    }
    if (name!="umair"){
        cout<<"try again";
    }
}