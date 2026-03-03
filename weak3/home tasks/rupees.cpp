#include<iostream>
using namespace std;
main(){

	float veg_price;
	float fruit_price;
	int total_veg;
	int total_fruit;
	float exchange_rate= 1.94;
	cout<<"Enter vegetable price per kg : ";
	cin>> veg_price;
	cout<<"Enter fruit price per kg : ";
	cin>> fruit_price;
	cout<<"Enter total kg of vegetable : ";
	cin>> total_veg;
	cout<<"Enter total kg of fruit : ";
	cin>> total_fruit;

	int total_earns;
	total_earns= (veg_price * total_veg) + (fruit_price * total_fruit);
	int rupees= total_earns / exchange_rate;
	cout<<"total earnings in rupees : "<< rupees;










}