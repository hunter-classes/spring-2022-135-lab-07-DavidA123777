#include <iostream>
#include <string>
#include <fstream>
#include "unindent.h"
using namespace std;
int main(){
std::string file_to_change;
std::cout << "Enter file to change: " << std::endl;
std::cin >> file_to_change;
std::fstream myfile;
myfile.open(file_to_change, std::ios::in);
std::fstream newfile;
newfile.open("new-code.cpp", std::ios::out);


if (myfile.is_open()){
  std::string line;

  std::string temp = "";

  while (getline(myfile, line)){
    std::cout << line << std::endl;}
  }
  myfile.close();
  myfile.open(file_to_change, std::ios::in);



int tab = 0;
if (myfile.is_open()){
  std::string line;

  std::string temp = "";

  while (getline(myfile, line)){
  temp = removeLeadingSpaces(line);
    if (tab > 0){
    for (int x = 0; x <= tab; x++){
      temp = '\t' + temp;
    }
    }
    newfile << temp << endl;
  int s = countChar(line);

  tab += s;







newfile << temp << endl;


std::cout << temp << endl;
}
newfile.close();
myfile.close();
}

return 0;
}
