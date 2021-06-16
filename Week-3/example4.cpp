#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    string var = "54";
    string var2 = "Hi";

    cout << "Output from isdigit "<<  isdigit(var[0]) << endl; // var[0] is the value at first index of string so here it is 5
    cout << "Output from isalpha "<< isalpha(var2[0]) << endl; // var2[0] is the value at first index of string so here it is H
    cout << "Output from isupper "<< isupper(var2[0]) << endl;// var2[0] is the value at first index of string so here it is H
    cout << "Output from islower "<< islower(var2[0]) << endl; // var2[0] is the value at first index of string so here it is H
    cout << "Output from islower "<< islower(var2[1]) << endl; // var2[1] is the value at second index of string so here it is i
    
    return 0;


}