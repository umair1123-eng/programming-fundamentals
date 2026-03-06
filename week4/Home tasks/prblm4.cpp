#include<iostream>
using namespace std;
main(){

    int nor;
    int now;
    int notu;
    float dis;
    float fprice;
    
    cout<<"Red : ";
    cin>> nor;
    cout<<"White : ";
    cin>> now;
    cout<<"Tulips : ";
    cin>> notu;
    float rp=nor*2.00;
    float wp=now*4.10;
    float tp=notu*2.50;
    float price=rp+wp+tp;
    if (price>100){
        dis=price*0.2;
        fprice=price-dis;
    }
    cout<<"Original price : "<<price<<"\n";
    cout<<"Discounted Price is : "<<fprice;
}