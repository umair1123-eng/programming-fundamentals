#include<iostream>
using namespace std;
int main(){
    string input;
    string output;
    int asciicode;
    cout<<"Input : ";
    getline(cin, input);
    for(int x=0; input[x]!='\0'; x++){
        asciicode=input[x];
        cout<<""<<asciicode+1<<"";
        char asciicode=(asciicode);
        cout<<asciicode;
    }
    
}