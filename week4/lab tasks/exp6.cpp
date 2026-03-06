#include<iostream>
using namespace std;
main(){
    string name1;
    string name2;
    cout<<"Enter Your Name : ";
    cin>> name1;
    cout<<"Renter your Name : ";
    cin>> name2;
    if (name1==name2){
        cout<<"Yes ";
    }
    if (name1!=name2){
        cout<<"No ";
    }
}