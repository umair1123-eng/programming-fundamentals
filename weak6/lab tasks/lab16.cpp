#include<iostream>
using namespace std;
int main(){
    int e1;
    int e2;
    cout<<"Enter NO Of elements in first array (Must be 2) :";
    cin>> e1;
    cout<<"Enter "<<e1<<" elements for 1st array \n";
    int arr1[e1];
    for(int x=0; x<e1;x++){
        cin>> arr1[x];
    }
    cout<<"Enter NO Of elements in Second array :";
    cin>> e1;
    cout<<"Enter "<<e2<<" elements for 2nd array \n";
    int arr2[e2]; 
    for(int z=0; z<e1;z++){
        cin>> arr2[z];
    }
    cout<<"result : "<<arr1[e1]<<arr2[e2];
}