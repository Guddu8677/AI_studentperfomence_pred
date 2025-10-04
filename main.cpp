#include<iostream>
#include<vector>
#include "student.h"
#include "predictor.h"
#include "fileHandler.h"


using namespace std;

int main(){


    vector<Student> students;

    Predictor Predictor;

    loadcsv(students , "students.csv");

    int choice;
    do{

        cout<< "\n1. Add student \n2 Predict score \n3. Show all n4. save csv n5. Exit\n";

        cout << "Enter you choice ";
        cin >> choice;
        cin.ignore();


        if(choice == 1 ){

            string name;  double prevScore , attendance , studyHours , extra;

            cout << "Enter name : "; getline(cin , name);
            cout<<" previous score : "; cin>> prevScore;
            cout << " Attendance : "; cin>>attendance;
            cout << " Study Hours : "; cin >>studyHours;

            cout << " Extra Curricular  score " ; cin>> extra;

         students.push_back(Student(name, prevScore, attendance, studyHours, extra));
        }
        else if (choice == 2) {
            for (auto &s : students) {
                Predictor.predict(s);
                cout << "\nStudent: " << s.name
                     << "\nPredicted Score: " << s.predictedScore
                     << "\nGrade: " << s.Grade
                     << "\nRecommendation: " << s.recomendation << "\n";
            }
        }
        else if (choice == 3) {
            for (auto &s : students) cout << s.name << "\n";
        }
        else if (choice == 4) {
            savecsv(students, "students.csv");
            cout << "Saved to students.csv\n";
        }
    } while (choice != 5);

    return 0;
}
