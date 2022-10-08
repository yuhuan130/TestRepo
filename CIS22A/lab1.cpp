//
//  main.cpp
//  CIS22A
//
//  Created by Alex Chien on 2022/10/7.
//
/*
 1. (5 pts) Print out the following, each on separate lines:
 - Hello world!
 - Your name and your major (or intended major if you don't have one yet)
 - How many CIS classes you've taken so far
 - What do you want to get out of this class?
 2. (15 pts) Assume that there are 85 CIS classes being offered at De Anza. Assume that there is
 an average of 30 student registrations per class.
 Write a program that calculates the total number of class registrations this quarter using
 the following steps:
 - Declare 2 int variables
 - Prompt the user with a question about the number of CIS courses being offered
 - Read in user input
 - Prompt the user with how many average student registrations there are per course
 - Read in user input
 - Print out a statement explaining the total number of registrations. Your statement should
 include both a string literal (i.e. "Total course registrations: ") and the registration total,
 calculated by multiplying your variables together.
 */

#include <iostream>
using namespace std;

int main()
{
    
    cout << " Hello World! " << endl;
    cout << " My name is Alex, and my major is computer science. " << endl;
    cout << " This is my first CIS class, though I've taken some classes online by myself in summer. " << endl;
    cout << " I hope that I can set a good foundation and dig more into the CS field. " << endl;
    
    int num_cis_courses;
    cout << " How many CIS courses are being offered at De Anza? ";
    cin >> num_cis_courses;
    int num_student_per_course;
    cout << " How many average student registrations there are per course? ";
    cin >> num_student_per_course;
    cout << " Total course registration:  " << num_cis_courses*num_student_per_course << endl;
    
    return 0;
    
    
    
}
