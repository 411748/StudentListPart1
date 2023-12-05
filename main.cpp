#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

void add(char* newstudent);
void print(Node* next);
void remove(Node*);

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
  delete(n);
}

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

void print(Node* next) {
  if(next == head) {
    cout << "List: ";
  }
  if(next != NULL) {
    cout << next->getStudent()->getName() << " ";
    print(next->getNext());
  }
}

