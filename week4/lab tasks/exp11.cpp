#include<iostream>
using namespace std;
main(){
    string name1;
    string name2;
    string name3;
    int age1;
    int age2;
    int age3;
    cout<<"Enter Name of brothers : \n";
    cin>> name1;
    cin>> name2;
    cin>> name3;
    cout<<"Enter Age of brothers :\n";
    cin>> age1;
    cin>> age2;
    cin>> age3;
    if(age1>age2){
        if(age1>age3){
            cout<<"Younger is : "<<name1;
        }
    }
    if(age2>age1){
        if(age2>age3){
            cout<<"Younger is : "<<name2;
        }
    }
    if(age3>age2){
        if(age3>age1){
            cout<<"Younger is : "<<name3;
        }
    }
