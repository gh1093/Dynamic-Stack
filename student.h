#ifndef STUDENT_H
#define STUDENT_H
#include<cstring>
#include <iostream>

using namespace std;

class student {
    
private:
    int studentID;
    string studentName;
    string studentAddress;
    double scoreAverage; 
    
    
    
  
public:
    student();
    student(string studentName, int studentID, string studentAddress, 
            double scoreAverage, int *testscores);
    int getStudentID();
    string getStudentName();
    string getStudentAddress();
    double getscoreAverage();
    
};

struct node{
        student stud;
        node *next;
};

//node *top;


   
 
   



#endif /* STUDENT_H */

