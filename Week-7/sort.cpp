#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    


    int arr[5] = {40,10,30,20,50};


    sort(arr, arr+5);

      for(auto element: arr){

        cout<<element<<endl;
    }
}