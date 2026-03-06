#include<iostream>
using namespace std;
main(){

    string fig;
    float n1;
    float n2;
    float result;
    cout<<"Enter figure : (Square , Rectangle , Triangle , Circle) ";
    cin>> fig;
    if(fig=="square"){
        cin>> n1;
        result=n1*n1;
        cout<<"A= "<<result;
    }
    if(fig=="rectangle"){
        cin>> n1;
        cin>> n2;
        result=n1*n2;
        cout<<"A= "<<result;
    }
    if(fig=="triangle"){
        cin>> n1;
        cin>> n2;
        result=(n1*n2)/2;
        cout<<"A= "<<result;
    }
    if(fig=="circle"){
        cin>> n1;
        result=3.14*(n1*n1);
        cout<<"A= "<<result;
    }

}