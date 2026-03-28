#include<iostream>
using namespace std;
int main(){
    int nores;
    float sum=0;
    cout<<"Enter No Of resistors in series : ";
    cin>> nores;
    float value[nores];
    cout<<"Enter values of "<<nores<<" resistors one per line : \n";
    for(int x=0; x<nores; x++){
        cin>> value[x];
        sum=sum+value[x];
    }
    cout<<"Total resistance of the series circuit is "<<sum;

}