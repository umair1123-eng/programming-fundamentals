#include<iostream>
using namespace std;
main(){
    string my_pass, user_pass;
    my_pass="pass1234";
    cout<<"Enter a Password : ";
    cin>> user_pass;
    if(my_pass == user_pass){
        cout<<"Wow! you have cracked the code";
    }
    if(my_pass != user_pass){
        cout<<"it's not so Simple! ,Try Again !";
    }
}