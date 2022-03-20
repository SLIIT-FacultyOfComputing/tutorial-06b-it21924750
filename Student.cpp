#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentId, const char pname[])
{
  studentId=pstudentId;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display()
{
  count<<"-----------------------------"<<endl;
  count<<"Student ID: "<<studentId<<endl;
  count<<"Student Name: "<<name<<endl;
  count<<"-----------------------------"<<endl;
}
