#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *pointer= &x;
    cout<<"value of x: "<< x << "\n";
    cout<<"Address of x: "<< &x <<"\n";
    cout<<"value at pointer : "<< *pointer <<"\n";
    return 0;
}