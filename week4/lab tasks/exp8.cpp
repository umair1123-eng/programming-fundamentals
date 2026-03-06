#include<iostream>
using namespace std;
main(){
    int bill;
    int dis;
    cout<<"Enter bill : ";
    cin>> bill;
    if(bill<=5000){
        dis=bill*0.5;
        cout<<"Your Discounted bill is : "<<dis;
    }
    if(bill>5000){
        dis=bill*0.10;
        cout<<"Your Discounted bill is : "<<dis;
    }
    

}