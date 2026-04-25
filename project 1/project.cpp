#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int total_Students=100;  // total size...

    int index=0;

    string nameArr[total_Students];
    int ageArr[total_Students];
    float matricArr[total_Students];
    float interArr[total_Students];
    float ecatArr[total_Students];
    string pref1Arr[total_Students];
    string pref2Arr[total_Students];
    string pref3Arr[total_Students];
    float aggregateArr[total_Students];

    while(true){

        // main header

        system("cls"); // clear the screen
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"----------------------UNIVERSITY MANAGEMENT SYSTEM--------------------------"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        // menu 
        cout<<"User Menu \n";
        cout<<"1. Admin \n";
        cout<<"2. Student \n";
        cout<<"3. Exit ! \n";
        // option choosing
        cout<<"Choose option : ";
        int userOption;
        cin>> userOption;
        cout<<"You Choose "<< userOption <<endl; 
        if(userOption==1){
            // admin menu here
            cout<<"This is Admin Menu :";
            getch();
        }
        else if(userOption==2){
            system("cls");
            // student menu here
            cout<<"Wellcome to UMS Student Menu  \n";

            // student data ............

            cout<<"Enter your name : ";
            string name;
            cin>> name;
            cout<<"Enter your age : ";
            int age;
            cin>> age;
            cout<<"Enter matric marks : ";
            float matric;
            cin>> matric;
            cout<<"Enter Inter marks : ";
            float inter;
            cin>> inter;
            cout<<"Enter Ecat Marks : ";
            float ecat;
            cin>> ecat;
            cout<<"Enter CS, CE, EE as your prefrences : \n";
            cout<<"Enter your 1st prefrence : ";
            string pref1;
            cin>> pref1;
            cout<<"Enter your 2nd prefrence : ";
            string pref2;
            cin>> pref2;
            cout<<"Enter your 3rd Prefrence : ";
            string pref3;
            cin>> pref3;

            nameArr[index]= name;
            ageArr[index]=age;
            matricArr[index]=matric;
            interArr[index]=inter;
            ecatArr[index]= ecat;
            pref1Arr[index]= pref1;
            pref2Arr[index]= pref2;
            pref3Arr[index]= pref3;
            index=index+1;
            cout<<"Your data has been recorded successfully ! \n";
            
            getch();
        }
        else if(userOption==3){
            cout<<"Exiting the system ! \n";
            break;
        }
        else{
            cout<<"Invalid option ! Please choose again \n";
        }
    }
    cout<<"Thanks for using this software ! "<< endl;
}