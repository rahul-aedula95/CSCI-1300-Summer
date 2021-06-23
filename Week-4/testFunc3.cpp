#include<iostream>
using namespace std;

// Below is the function definition
int testingFunc(int var)
{
    int result;   
    if (var > 5)
    {
         
        result = var + 20;
        return result;
    }
    else
    {
        
        result = var + 30;
        return result;
    }
    
}
int main()

{
int a = 7;
int result;

//Calling a function
result = testingFunc(a);

cout<<"The result is " << result <<endl; 
}



