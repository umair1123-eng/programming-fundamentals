#include<iostream>
using namespace std;
int main(){

    string word;
    char letter;
    cout<<"Enter Any Word : ";
    getline(cin, word);
    cout<<"Enter A letter you want to find : ";
    cin>> letter;
    bool isfound=false;
    for(int x=0; word[x]!='\0'; x++){
        if(word[x]==letter){
            isfound=true;
            cout<<letter<<" is found in "<<word;
            break;
        }

    }
    
    return isfound;
}