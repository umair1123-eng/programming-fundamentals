#include<iostream>
using namespace std;
int main(){
    string name;
    int sum=0;
    cout<<"Enter a String : ";
    cin>> name;
    for(int idx=0; name[idx]!='\0'; idx=idx+1){
        sum=idx+1;
    }
    if(sum%2==0){
        cout<<"True !";

    }
    else{
        cout<<"False!!";
    }
}