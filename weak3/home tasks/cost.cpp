#include<iostream>
using namespace std;
main(){

	float size;
	float cost;
	float area;
	cout<<"Enter the size of fertilizer bag : ";
	cin>> size;
	cout<<"Enter the cost of bag : ";
	cin>> cost;
	cout<<"Enter the area in square feet that can cover by bag : ";
	cin>> area;
	float cost_per_pound;
	cost_per_pound=cost/size;
	float cost_per_square;
	cost_per_square=cost_per_pound/2;
	cout<<"cost of fertilizer per pound is "<<cost_per_pound<<"\n";
	cout<<"cost of fertilizer per square foot is "<<cost_per_square;

	







}