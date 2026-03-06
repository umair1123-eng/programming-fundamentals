#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter integer Number : ";
    cin>> num;
    if(num%2==0){
        cout<<"Even Number";
    }
    if(num%2!=0){
        cout<<"Odd Number";
    }
}