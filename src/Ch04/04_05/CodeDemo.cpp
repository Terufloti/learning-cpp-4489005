// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5), 
                                Course(2, "Physics", 4), 
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)}; 

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    int down = 0;
    for(int i=0;i<grades.size();i++) {
        if(grades.at(i).get_student_id() == id) {
            int course_num = grades.at(i).get_course_id();
            int char_grade = grades.at(i).get_grade();
            float digit_grade = 0;
            switch(char_grade) {
                case 'A': digit_grade = 4.0f;break;
                case 'B': digit_grade = 3.0f;break;
                case 'C': digit_grade = 2.0f;break;
                case 'D': digit_grade = 1.0f;break;
                default: digit_grade = 0.0f;break;
            }
            for(int j=0;j<courses.size();j++){
                if(courses.at(j).get_id() == course_num) {
                    int wage = 0;
                    wage = courses.at(j).get_credits();
                    down += wage;
                    GPA += digit_grade * wage;
                }
            }
        }
    }
    GPA /= down;

    std::string student_str;
    student_str = students.at(id-1).get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
