#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter The Numbers You Wanna enter : ";
    cin>> num;
    int arr[num];
    for(int x=0; x<num; x++){
        cout<<"Enter NUmbers : ";
        cin>> arr[x];
    }
}