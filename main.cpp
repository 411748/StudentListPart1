//Nick Braun
//12/5/2023
//Student List Part 1 - Shows that the functions in node code works
#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

//Function prototypes
void add(char* newstudent);
void print(Node* next);
void remove(Node*);

//Main loop that calls to add multiple lists
Node* head = NULL;
int main() {
  char* Student1 = new char[SIZE];
  strcpy(Student1, "Apple");
  add(Student1);
  print(head);
  char* Student2 = new char[SIZE];
  strcpy(Student2, "Pear");
  add(Student2);
  print(head);
  delete head;
  head = NULL;
}

//Adding funtion that uses some of the functions in node code
void add(char* newstudent) {
  Node* current = head;
  Student* s = new Student();
  Node* n = new Node(s);
  s->setName(newstudent);
  if(current == NULL) {
    head = n;
  }
  else {
    while(current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(n);
  }
}

//Print function that uses the rest of the functions in node code
void print(Node* next) {
  if(next == head) {
    cout << "List: ";
  }
  if(next != NULL) {
    cout << next->getStudent()->getName() << " ";
    print(next->getNext());
  }
}

