#include<iostream>
using namespace std;
main(){

    string cname;
    int price;
    int dis;
    float fprice;
    cout<<"Write Country Name here : ";
    cin>> cname;
    cout<<"Enter Price Of Ticket : $";
    cin>> price;
    if(cname=="ireland"){
        dis= price*0.1;
    }
    else{
        dis= price*0.05;
    }
    fprice=price-dis;
    cout<<"Final Price is : $"<<fprice;
}