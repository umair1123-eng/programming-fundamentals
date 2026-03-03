#include<iostream>
using namespace std;
main(){

	int no_of_min;
	int frame_per_sec;
	int no_of_frame;
	cout<<"enter no of minutes : ";
	cin>>no_of_min;
	cout<<"enter frames per second : ";
	cin>> frame_per_sec;
	no_of_frame=no_of_min*frame_per_sec*60;
	cout<<"total no of frames is : "<<no_of_frame;

	
	

}