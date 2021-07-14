#include<iostream>
#include<algorithm>
using namespace std;

bool compareFunc(int a, int b){

    return (a>b);
}




int main(){


    


    int arr[5] = {40,10,30,20,50};


    sort(arr, arr+5, compareFunc);

      for(auto element: arr){

        cout<<element<<endl;
    }
}