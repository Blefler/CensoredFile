//Author: Brad Lefler
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string line;
  char first = ' ', last = ' ', current;
  ifstream myfile;
  myfile.open ("example.txt", ios::in);
  myfile.seekg (0, ios::beg);
  myfile>>first;
 // first = 
  myfile.seekg (-2, ios::end);
  myfile>>last;

  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last

//F**
//F**k

  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;
  myfile.close();
  return 0;
}
