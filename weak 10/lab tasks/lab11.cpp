#include<iostream>
using namespace std;
void check(char alph ){
    if(alpha=='a'){
        cout<<"You entered small letter -----a----) ";
    }
    else if(alpha=='A'){
        cout<<"You entered capital letter -----A----";
    }
}
int main(){
    char alpha;
    cout<<"Enter any alphabet (Alphabet must be a or A) : ";
    cin>> alpha;
    cout<<""<< check(alpha);
    

}