#include<iostream>
using namespace std;
int main(){
    int noelement;
    cout<<"Enter No Of Elements : ";
    cin>> noelement;
    int arr[noelement];
    cout<<"Enter "<<noelement<<" Numbers, one per line : \n";
    for(int x=0; x< noelement; x++ ){
        cin>> arr[x];
        
    }
    int largest=arr[0];
    for(int x=0; x<noelement; x++){
        if(arr[x]> largest){
            largest=arr[x];
        }
    }
    cout<<"Largest No is : "<<largest;
}