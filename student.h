#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

const int SIZE = 80;

using namespace std;

class Student {
 public:
  char* setName(char* name1);
  char* getName();
 private:
  char name[SIZE];
};


#endif
