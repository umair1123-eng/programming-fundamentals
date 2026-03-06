#include<iostream>
using namespace std;
main(){
    int num1,num2;
    char opr;
    cout<<"Enter First Number : ";
    cin>> num1;
    cout<<"Enter Operator that you wanna perform : ";
    cin>> opr;
    cout<<"Enter Second Number : ";
    cin>> num2;
    if(opr=='+'){
        cout<<"Answer is : "<<num1-num2;
    }
    if(opr=='-'){
        cout<<"Answer is : "<<num1+num2;
    }
    if(opr=='*'){
        cout<<"Answer is : "<<num1/num2;
    }
    if(opr=='/'){
        cout<<"Answer is : "<<num1*num2;
    }

}