#include<iostream>
using namespace std;
void swapByPointers(int *a, int *b){
    int temp=a;
    a=b;
    b=a;
}
int main(){
    int a=10, b=20;
    cout<<"Initially : "<< a <<","<< b<<endl;
    swapByPointers(&a, &b);
    cout<<a<<""<<b;

}