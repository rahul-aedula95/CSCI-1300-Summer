#include<ctime>
#include<cstdlib>

int main()
{
int randomNumber;
srand(time(NULL)); // This seeds the rand function. 
randomNumber = rand() % 3; // This generates random numbers from 0 to 2. (3 is not included)

return 0; 
}