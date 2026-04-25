#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int dis;
    int angle;
    float hight;
    float angleradian;
    float pie=3.14;
    cout<<"Enter Distance from your position to top of tree (in feet) : ";
    cin>> dis;
    cout<<"Enter The angle of elevation (in degrees) : ";
    cin>> angle;
    angleradian= angle*(pie/180);
    hight= dis * tan(angleradian);
    cout<<"Hight of Tree is : "<< hight;
    return 0;

}