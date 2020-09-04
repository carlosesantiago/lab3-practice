#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;

    cout <<"Hola" << endl;
    cout << "Hello World!" << endl;
    cout <<"Enter your name: " ;
    getline(cin,name); 
    cout << "Hello " << name << endl; 
    return 0;
}
