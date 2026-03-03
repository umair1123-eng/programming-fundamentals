#include<iostream>
using namespace std;
main(){

	string movie_name;
	int pof_adults;
	int pof_childs;
	int nof_adults;
	int nof_childs;
	float per;
	cout<<"Enter movie Name : ";
	cin>> movie_name;
	cout<<" Enter price of adult tickets : ";
	cin>> pof_adults;
	cout<<" Enter price of child tickets : ";
	cin>> pof_childs;
	cout<<" Enter no of adults tickets : ";
	cin>> nof_adults;
	cout<<" Enter no of child tickets : ";
	cin>> nof_childs;
	cout<<"enter percentage of number to be donated in charity";
	cin>> per;
	int total_money;
	total_money=(pof_adults*nof_adults)+(pof_childs*nof_childs);
	cout<<"Total money for donation is "<<total_money<<"\n";
	int donation;
	donation=(total_money*per)/100;
	cout<<"donation to charity is "<< donation<<"\n";
	int remaining;
	remaining=total_money-donation;
	cout<<"remaining money after donation is "<< remaining<<"\n";


}