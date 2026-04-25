#include<iostream>
using namespace std;
int mul(int num){
    int result= num*5;
    return result;

}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>> num;
    cout<<"Result is : "<< mul(num);
    return 0;


}