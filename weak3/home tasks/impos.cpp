#include<iostream>
using namespace std;
main(){

	int imposter_count;
	float player_count;
	int chance;
	cout<<"enter imposter count : ";
	cin>>imposter_count;
	cout<<"enter player count : ";
	cin>>player_count;
	chance=100*(imposter_count/player_count);
	cout<<"the chance of bieng imposter is "<<chance <<"%";	






}