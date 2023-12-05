#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}

Node::~Node() {
  delete student;
  next = NULL;
}

Node::Node getNext() {
  return next;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Student* Node::getStudent() {
  return student;
}

void Node::setStudent(Student* newStudent) {
  student = newStudent;
}
