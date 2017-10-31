#include <cstdlib>
#include"student.h"
#include<cstring>
#include <iostream>

using namespace std;

student::student(){
}

student::student(string studentName, int studentID, string studentAddress, 
                double scoreAverage, int* testscores){
    this->studentID = studentID;
    this->studentName = studentName;
    this->studentAddress = studentAddress;
    this->scoreAverage = scoreAverage; 
    
}

int student::getStudentID(){
    return studentID;
}

string student::getStudentName(){
    return studentName;
}

string student::getStudentAddress(){
    return studentAddress;
}

double student::getscoreAverage(){
    return scoreAverage;
}
