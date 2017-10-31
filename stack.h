
#ifndef STACK_H
#define STACK_H
#include "student.h"
#include<cstring>
#include <iostream>


using namespace std;

class stack {
    
private:
   
    node *top;
     
public:    
    stack();
    ~stack();
    void push(student x);
    void pop(); 
    student stackTop();
    void display();
    bool isEmpty();
};
  



#endif /* STACK_H */

