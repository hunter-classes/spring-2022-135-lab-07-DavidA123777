#include <iostream>
#include <string>
#include <fstream>
#include "unindent.h"
using namespace std;
int main(){

std::fstream myfile;
myfile.open("bad-code.cpp", std::ios::in);
std::fstream newfile;
newfile.open("new-code.cpp", std::ios::out);


if (myfile.is_open()){
  std::string line;
  int tab = 0;
  std::string temp = "";

  while (getline(myfile, line)){


  int s = countChar(line);

  tab += s;



  temp = removeLeadingSpaces(line);


  if (tab > 0){
  for (int x = 0; x < tab; x++){
    temp = '\t' + temp;
  }
}

newfile << temp << endl;


std::cout << temp << endl;
}
newfile.close();
myfile.close();




  return 0;
}
}
