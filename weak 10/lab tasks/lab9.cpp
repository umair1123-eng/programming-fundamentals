#include<iostream>
#include<cmath>
using namespace std;
float disc(float a, float b, float c){
    float ans=(b*b)-(4*a*c);
    return ans;
}
void check(float dis, float a, float b, float c){
    if(dis == 0){
       float root= -b/(2*a);
       cout<<"Solution : "<< root<< "\n";
    }
    else if(dis > 0){
        float root1= (-b+ sqrt(dis))/(2*a);
        float root2= (-b- sqrt(dis))/(2*a);
        cout<<"x = "<< root1 <<"\n";
        cout<<"x = "<< root2 <<"\n";
        
    }
    else if(dis < 0){
        float part1=-b/(2*a);
        float part2=sqrt(-dis)/(2*a);
        cout<<"Complex solutions : \n x = "<< part1 << "+" << part2<<"i";
    }
}
int main(){
    float a,b,c;
    cout<<"Enter a : ";
    cin>> a;
    cout<<"Enter b : ";
    cin>> b;
    cout<<"Enter c : ";
    cin>> c;
    float dis=disc(a, b, c);
    check(dis, a, b, c);
    return 0;

}