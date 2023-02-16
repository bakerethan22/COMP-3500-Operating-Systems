#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
   ofstream output;
   output.open("numbers.txt");   
   srand(time(0));
   for(int i=0;i<100;i++) {
      int numbers = rand() % 1001;
      output<< numbers << "\n";
   }
   cout<<"Data appended"<<endl;
   return 0; //Return the value
}