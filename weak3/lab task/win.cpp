#include<iostream>
using namespace std;
main(){

	int win;
	int draws;
	int loss;
	cout<<"enter no.of wins : ";
	cin>>win;
	cout<<"enter no.of draws : ";
	cin>>draws;
	cout<<"enter no.of loss : ";
	cin>>loss;
	int p =win*3 + draws*1 + loss;
	cout<<"pak won by "<<p<<"points";




}