#include<iostream>
using namespace std;
int main(){

    int sum=0;
    float avg=0;
    int arr[5]={1,2,3,4,5};
    for(int x=0; x<5; x++){
        sum=sum+arr[x];
        avg=sum/5;
    }
    cout<<"Sum is :"<< sum<<"\n";
    cout<<"Average is :"<< avg<<"\n";
}