#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Student
{
    int studentID;
    int grades[10];
public:
    void setStudentID(int studentIDInput)
    {
        studentID = studentIDInput;
    }

    void setGrade(int index, int gradesInput)
    {
        grades[index] = gradesInput;
    }

    void printGrades()
    {
        cout << studentID << '\n';
        for (size_t i = 0; i < 10; i++)
        {
            cout << grades[i] << " ";
        }
    }

    int getMin()
    {
        int min = grades[0];
        for (size_t i = 0; i < 9; i++)
        {
            if (grades[i] < grades[i+1])
            {
                min = grades[i];
            }
        }
        return min;
    }

    int getMax()
    {
        int max = grades[0];
        for (size_t i = 0; i < 9; i++)
        {
            if (grades[i] > grades[i+1])
            {
                max = grades[i];
            }
        }
        return max;
    }

    float getAverageGrade()
    {
        float sum = 0;
        int i;
        for (i = 0; i < 10; i++)
        {
            sum += grades[i];
        }
        return sum / i;
    }

    int getGrade(int index)
    {
        return grades[index];
    }
};

class CourseEnrollment
{
public:
    Student students[6]; // !!!
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

    void addStudents(Student studInput[])
    {
        for (size_t i = 0; i < 6; i++)
        {
            students[i] = studInput[i];
        }
    }

    int *getAllGrades()
    {
        int k;
        for (size_t stud = 0; stud < 6; stud++)
        {
            for (size_t index = 0; index < 10; index++)
            {
                grades[k] = students[stud].getGrade(index);
                ++k;
            }
        }
        return grades; 
    }

    int *sortAllGrades()
    {   
        for (size_t j = 0; j < 60; j++)
        {
            for (size_t i = 0; i < 59; i++)
            {
                if (grades[i] > grades[i + 1])
                {
                    int swap = grades[i + 1];
                    grades[i + 1] = grades[i];
                    grades[i] = swap;
                }
            }
        }       
        return grades;
    }

    int getMinGrade()
    {
        int min = grades[0];
        for (size_t i = 0; i < 59; i++)
        {
            if (grades[i] > grades[i+1])
            {
                min = grades[i];
            }
        }
        return min;
    }

    int getMaxGrade()
    {
        int max = grades[0];
        for (size_t i = 0; i < 59; i++)
        {
            if (grades[i] > grades[i+1])
            {
                max = grades[i];
            }
        }
        return max;
    }

    float getAvgGrade()
    {
        float sum = 0;
        int i;
        for (i = 0; i < 60; i++)
        {
            sum += grades[i];
        }
        return sum / i;
    }
};