#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> mp;
    mp["Abc"] = 26;
    mp["cde"] = 27;
    mp["fgh"] = 27;
    mp["xyz"] = 28;



    for(auto item: mp){

        cout<<"The key is "<<item.first<<" The value is "<<item.second<<endl;
    }
    


}