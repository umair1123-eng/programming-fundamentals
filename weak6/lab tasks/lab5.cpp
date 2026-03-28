#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int x=0; x<5; x++){
        cout<<"Enter "<<x+1<<" digits :";
        cin>> arr[x];
    }
    cout<<"The First Elemetnt is :"<<arr[0]<<"\n";
    cout<<"The last Elemetnt is :"<<arr[4];
}