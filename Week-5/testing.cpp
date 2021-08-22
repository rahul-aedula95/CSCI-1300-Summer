#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Car
{   public:

        string make;
        double mpg;
        int year;
};

bool TestComparator(Car a, Car b)  {
        return a.mpg > b.mpg; 
}

int main()
{
    // ------------ DO NOT MODIFY --------------
    vector<Car> vec;
    string input_line;
    string make; double mpg; int year;
    
    while(getline(cin, input_line))
    {
        istringstream is(input_line);
        is >> make >> mpg >> year;
        vec.push_back(Car({make, mpg, year}));
    }
    // -----------------------------------------
    
    // TODO: SORT THE VECTOR OF CAR OBJECTS HERE
    sort(vec.begin(), vec.end(), TestComparator);
    
    for(auto i : vec)
        cout << i.make << ", " << i.mpg << ", " << i.year << endl;
    
    return 0;
}