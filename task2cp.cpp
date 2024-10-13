#include <iostream>
#include <string>

using namespace std;


float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

int main() 
{
    string name;
    float eng, math, chem, ss, bio;


    cout << "Student Name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> eng;
    cout << "Enter marks for Maths: ";
    cin >> math;
    cout << "Enter marks for Chemistry: ";
    cin >> chem;
    cout << "Enter marks for Social Science: ";
    cin >> ss;
    cout << "Enter marks for Biology: ";
    cin >> bio;

    float average = calculateAverage(eng, math, chem, ss, bio);
    string grade = calculateGrade(average);

    float totalMarks = eng + math + chem + ss + bio;


    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks %: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}


float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology) 
{
    float totalMarks = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology;
    return totalMarks / 5; 
}

string calculateGrade(float average)
 {
    if (average >= 90) 
    {
        return "A+";
    }
    if (average >= 80)
     {
        return "A";
    }
    if (average >= 70) 
    {
        return "B+";
    }
    if (average >= 60)
     {
        return "B";
    }
    if (average >= 50)
     {
        return "C";
    }
    if (average >= 40) 
    {
        return "D";
    }
    return "F"; 
}
