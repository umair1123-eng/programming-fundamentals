#include<iostream>
using namespace std;
main(){

	int num;
	int result1;
	int result2;
	int subtract=0;
	int mul=0;
	int sum=0;
	cout<<"Enter 15 number : ";
	cin>> num;
	
	subtract= subtract - num% 10;
	num/=10;
	subtract= subtract - num% 10;
	num/=10;
	subtract= subtract - num% 10;
	num/=10;
	subtract= subtract - num% 10;
	num/=10;
	subtract= subtract - num% 10;
	num/=10;
	mul= mul * num%10;
	num/=10;
	mul= mul * num%10;
	num/=10;
	mul= mul * num%10;
	num/=10;
	mul= mul * num%10;
	num/=10;
	mul= mul * num%10;
	num/=10;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	num/=10;
	sum= sum + num%10;
	
	result1= sum + mul;
	cout<<"Adition of the adition and multiplication is : "<<result1;

}