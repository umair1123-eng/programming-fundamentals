#include<iostream>
using namespace std;
void modifywithpointer(int *p){
    *p= 50;
}
void modifywithrefrence(int &r){
    r=100;
}

int main(){
    int a=10, b=20;

    modifywithpointer(&a);
    modifywithrefrence(b);
    cout<<"Value of a after pointer modification : "<<a<<endl;
    cout<<"Value of b after refrence modification : "<<b<<endl;
}