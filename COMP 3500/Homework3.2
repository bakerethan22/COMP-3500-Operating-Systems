#include <stdio.h>
#include <stdlib.h>

int isNum(char c)
{
   if(c<58 && c>47)
      return 1;
   return 0;
}

int main()
{
   char c;
   int no,nt,ctr[10]={0,0,0,0,0,0,0,0,0,0};
   FILE *fptr,*fwrite;
   fptr = fopen("input.txt","r+");
   fwrite = fopen("output.txt","w+");
   while((c = fgetc(fptr)) != EOF)
   {
      if(isNum(c))
      {
         nt = c-48;
         c = fgetc(fptr);
         if(c != EOF && !isspace(c))
         {
            no = c-48;
         }
         else
         {
            no = nt;
            nt = 0;
         }
         ctr[nt]++;
      }
   }
   for(int i=0; i<10; i++)
   {
      fprintf(fwrite,"\nGroup (%d..%d): %d",i*10,i*10+9,ctr[i]);
   }
   fclose(fptr);

   return 0;
}