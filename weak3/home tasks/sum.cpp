#include<iostream>
using namespace std;
main(){

	int num,sum=0;
	cout<<"Enter four digit number : ";
	cin>> num;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	cout<<"the sum of individval four digits is : "<<sum;









}