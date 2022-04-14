#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <ctype.h>
#include "indent.h"

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
