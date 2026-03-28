#include<iostream>
using namespace std;
int main(){
    int noelement;
    cout<<"Enter number of elements : ";
    cin>> noelement;
    cout<<"Enter "<<noelement<<" NUmbers, one per line \n";

    for(int x=noelement; x>0; x-- ){
        int total[x];
        cin>> total[x];
        if(x==total[x]){
            cout<<"Already Entered !";
        }
    }
    
    
}