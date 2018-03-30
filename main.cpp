//Author: Brad Lefler
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  char first = ' ', last = ' ', current;
  char letter;
  ifstream myfile;
  myfile.open ("example.txt", ios::in);
  while (!myfile.eof())
    {
      if (first==' ')
        {
         myfile>>letter;
           if ((letter<91&&letter>64)||(letter>96&&letter<123))
             {
             first=letter;
             }
        }
      else
        {
         myfile>>letter;
         if ((letter<91&&letter>64)||(letter>96&&letter<123))
          {
          last=letter;
          }
        }
     } 
 // myfile.seekg (0, ios::beg);
 // myfile>>first; 
 // myfile.seekg (offset, ios::end);
 // myfile>>last;
     
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last

  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;
  myfile.close();
  return 0;
}
