#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> mp;


    mp["Rahul"] = 26;
    cout<<mp["Rahul"]<<endl;
    mp["Rahul"] = 29;
    cout<<mp["Raul"]<<endl;


    //check if key exists
    cout<<mp.count("Rahul")<<endl;
    cout<<mp.count("Raul")<<endl;






}