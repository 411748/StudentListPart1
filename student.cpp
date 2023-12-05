#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

char* Student::setName(char* name1) {
  strcpy(name, name1); 
}

char* Student::getName() {
  return name;
}
