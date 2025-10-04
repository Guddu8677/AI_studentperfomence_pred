#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include "student.h"
#include <vector>
#include <fstream>
#include<sstream>
#include<iostream>

using  namespace std;

 void  loadcsv(vector<Student> &student , const string &filename) {

    ifstream file(filename);
    if(!file.is_open()) return;

    string line;

    while(getline(file, line)){

        stringstream ss(line);
        string name;
        double prevScore , attendance , studyHours, extra;

        getline( ss , name, ',');

        ss>> prevScore; ss.ignore();
        ss>>attendance; ss.ignore();
        ss>> studyHours; ss.ignore();
        ss>>extra;

        student.push_back(Student(name , prevScore , attendance , studyHours , extra));
    }


    file.close();



 }
 void savecsv(const vector<Student> &students , const  string &filename){


    ofstream file(filename);
    for(auto &s : students){

        file <<s.name <<", " << s.prevScore <<" , " <<s.attendance << " , " <<s.studyHours <<" ," <<s.extracurricular <<"\n";
    }

    file.close();
 }


 #endif