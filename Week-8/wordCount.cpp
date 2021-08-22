#include<iostream>
#include<string>
#include<fstream>
#include<map>
using namespace std;

int main(){

ifstream fp;
fp.open("words.txt");

if (!fp){

    cout <<"File is unable to open"<<endl;
    return 0;
}



string word;
map<string,int> mp;

while (fp >> word ){

    if (mp.count(word)){
        mp[word] =mp[word] + 1;
    }
    else{
        mp[word] = 1;
   }

}

for (auto item: mp){

    cout<<"Word: "<<item.first<<" Count: "<<item.second<<endl;
}



}