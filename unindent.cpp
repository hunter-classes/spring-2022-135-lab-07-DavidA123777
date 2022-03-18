#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <ctype.h>
#include "unindent.h"


std::string removeLeadingSpaces(std::string line){

std::string result = "";

for (int i = 0; i < line.length();i++){
  char c = line[i];
  int x = 0;

  bool y = true;
  if (isspace(c) == false && x < 1){
    x = 1;
  }

  if(x == 1)
  {
    result = result + c;
  }}

  //std::cout << result << std::endl;
  return result;

}
/*
if (isspace(c) == false && x < 1){
  x = 1;
}

if(x == 1)
{
  result = result + c;
}}

//std::cout << result << std::endl;
return result;

}*/


int countChar(std::string line){
  int count = 0;
  for (int i = 0; i < line.length(); i++){
    if (line[i] == '{'){
      count += 1;
    }
    else if (line[i] == '}'){
      count -= 1;
    }
  }
return count;
}
