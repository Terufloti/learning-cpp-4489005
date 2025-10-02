// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <fstream>
#include "records.h"

void initialize(StudentRecords&);
void initStudents(StudentRecords&, std::string);
void initCourses(StudentRecords&, std::string);
void initGrades(StudentRecords&, std::string);

int main(){
    int id;
    StudentRecords SR;
    std::string reportFilename = "report.txt";
    
    initialize(SR);

    SR.report_cards(reportFilename);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
    const std::string studentsFilename = "students.txt", 
    coursesFilename = "courses.txt", 
    gradesFilename = "grades.txt";

    initStudents(srec, studentsFilename);
    initCourses(srec, coursesFilename);
    initGrades(srec, gradesFilename);
}

void initStudents(StudentRecords& srec, std::string studentsFilename){
    std::ifstream studentsFile;
    studentsFile.open(studentsFilename);
    if(studentsFile.fail())
        std::cout<<"File with student data not found!"<<std::endl;
    else {
        int s_id;
        std::string str, s_name;
        while(!studentsFile.eof()) {
            getline(studentsFile, str);
            s_id = stoi(str);
            getline(studentsFile, str);
            s_name = str;
            srec.add_student(s_id, s_name);
        }
        studentsFile.close();
    }
}
void initCourses(StudentRecords& srec, std::string coursesFilename){
    std::ifstream coursesFile;
    coursesFile.open(coursesFilename);
    if(coursesFile.fail())
        std::cout<<"File with courses data not found!"<<std::endl;
    else {
        int c_id;
        std::string str, c_name;
        int c_credits;
        while(!coursesFile.eof()) {
            getline(coursesFile, str);
            c_id = stoi(str);
            getline(coursesFile, str);
            c_name = str;
            getline(coursesFile, str);
            c_credits = stoi(str);
            srec.add_course(c_id, c_name, c_credits);
        }
        coursesFile.close();
    }
}
void initGrades(StudentRecords& srec, std::string gradesFilename){
    std::ifstream gradesFile;
    gradesFile.open(gradesFilename);
    if(gradesFile.fail())
        std::cout<<"File with grades data not found!"<<std::endl;
    else {
        int s_id;
        int c_id;
        char grade;
        std::string str;
        while(!gradesFile.eof()) {
            getline(gradesFile, str);
            s_id = stoi(str);
            getline(gradesFile, str);
            c_id = stoi(str);
            getline(gradesFile, str);
            grade = str[0];
            srec.add_grade(s_id, c_id, grade);
        }
        gradesFile.close();
    }
}