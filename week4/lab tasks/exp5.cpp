#include<iostream>
using namespace std;
main(){
    int num1,num2;
    cout<<"Enter any number : ";
    cin>> num1;
    cout<<"Enter 2nd number : ";
    cin>> num2;
    if(num1>num2){
        cout<<""<<num1<<"greater than"<<num2;
    }
    if(num2>num1){
        cout<<""<<num2<<" greater than "<<num1;
    }

}