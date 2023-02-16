#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
   FILE* fp = fopen("numbers.txt", "r");
   int num;
   int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   if (fp == NULL) {
      printf("File doesn't exist.");
      exit(-1);
   }
   for (int i = 0; fscanf(fp, "%d ", &num) > 0; i++) {
      if ((num >= 0) && (num <= 9)) {
         arr[0]++;
      }
      else if ((num >= 10) && (num <= 19)) {
         arr[1]++;
      }
      else if ((num >= 20) && (num <= 29)) {
         arr[2]++;
      }
      else if ((num >= 30) && (num <= 39)) {
         arr[3]++;
      }
      else if ((num >= 40) && (num <= 49)) {
         arr[4]++;
      }
      else if ((num >= 50) && (num <= 59)) {
         arr[5]++;
      }
      else if ((num >= 60) && (num <= 69)) {
         arr[6]++;
      }
      else if ((num >= 70) && (num <= 79)) {
         arr[7]++;
      }
      else if ((num >= 80) && (num <= 89)) {
         arr[8]++;
      }
      else if ((num >= 90) && (num <= 99)) {
         arr[9]++;
      }
   } 
   ofstream outdata;
   outdata.open("HW3P1.txt");
   char data[100];
   for (int i = 0; i < 10; i++) {
      printf("Group %d (%d...%d) Count: %d\n", (i+1), i*10, (i*10+9), arr[i]);
      outdata << data << endl;
   
   }
   outdata.close();
   fclose(fp);
   
   
}