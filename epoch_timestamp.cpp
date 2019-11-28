#include <cstdlib>
#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int main() 
{
   time_t result=time(nullptr); 
    cout <<asctime(localtime(&result))<<endl<<result<<endl;
   milliseconds ms=duration_cast<result > (system_clock::now().time_since_epoch());
}
