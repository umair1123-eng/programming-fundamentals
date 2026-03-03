#include<iostream>
using namespace std;
main(){

	int sqmeter;
	int hight;
	int width;
	int wall;
	cout<<"Number of square meter you can paint : ";
	cin >> sqmeter;
	cout<<"hight of single wall : ";
	cin >> hight;
	cout<<"width of single wall: ";
	cin >> width;
	wall = sqmeter/(hight * width);
	cout<<"Number of walls you can paint : "<<wall;







}
