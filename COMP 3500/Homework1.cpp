#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define MAX_FILE_NAME 100
using namespace std;
int main(){
   int count; 
   FILE* fp;
   string tp;
   char filename[MAX_FILE_NAME];
   printf("Enter file name: ");
   scanf("%s", filename);
   fp.open(filename,ios::in);  // open a file to perform write operation using file object
   if(filename.is_open()) //checking whether the file is open
   {
      char currentline;
      while(getline(fileneame, tp)){ //read data from file object and put it into string.
         cout << tp << "\n"; //print the data of the string
      }
      filename.close(); //close the file object.
   }
}