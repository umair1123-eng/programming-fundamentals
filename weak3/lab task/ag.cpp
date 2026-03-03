#include<iostream>
using namespace std;

   main(){

	string name;
	int marks1;
	int marks2;
	int marks3;
	float ag;
	float agt;	
	cout<<"Enter matric marks out of 1100 : ";
	cin>> marks1;
	cout<<"Enter part-1 marks out of 550 : ";
	cin>> marks2;	
	cout<<"Enter ecat marks out of 400 : ";
	cin>> marks3;
	ag= (marks1/1100.0*0.10) + (marks2/550.0*0.40) + (marks3/400.0*0.50);
	cout<<"your aggrecate is "<<ag*100;
	







}