#include <iostream>
#include<cstring>
#include"stack.h"

using namespace std;
//OK....when you create a stack object, you HAVE to set your top pointer to 
//NULL, or you have to initialize top to SOMETHING...or else you have a random
//pointer just floating around in memory not pointing at anything, 
//and that leads to a SEG FAULT error!!
stack::stack(){
    top = NULL;
}

stack::~stack(){
    while (top != NULL){
        node *temp = top;
        delete temp;
        top = top->next;
    }
}

//This push function pushes a student record onto the stack
void stack::push(student x){
    
    node *newNode = NULL;
    
    newNode = new node;
    newNode->stud = x;
    
    if (isEmpty()){
        top = newNode;
        newNode->next = NULL;
    } else {
        newNode->next = top;
        top = newNode; 
    }
     
}

void stack::pop(){
 if(top==NULL)
        {
            cout<<"ERROR: STACK IS EMPTY\n";
            return;
        }
        else{
            node *temp=top;
            top=top->next;
            delete temp;
        }   
/*   
   node *temp = NULL; 
   
   if (isEmpty()){
       cout << "The Stack is Empty!" << endl;
   } else {
      temp = top->next;
      delete top;
      top = temp; 
   }
*/     
}

//What we are going to do is display what is at the top of the stack
//and then pop it to remove it
student stack::stackTop(){
    return top->stud;
}

void stack::display(){
    while (top != NULL){
        cout << top->stud.getStudentName() << "," 
                << top->stud.getStudentID() 
            << "," << top->stud.getStudentAddress() << "," 
            << top->stud.getscoreAverage() << endl;
        top = top->next;    
    }
}

bool stack::isEmpty(){
    bool status;
    
    if (top == NULL){
        status = true;
    } else {
        status = false;
    }
    return status;
}


