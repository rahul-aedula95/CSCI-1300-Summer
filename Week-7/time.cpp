#include<chrono>
#include<iostream>
using namespace std;


int main(){




  
    auto start = chrono::steady_clock::now();

    for (int i=0;i<50000000;i++){

        continue;
    }

    auto stop = chrono::steady_clock::now();



    cout<<"Elaspsed time is "<< chrono::duration_cast<chrono::milliseconds> (stop - start).count() <<endl;

}