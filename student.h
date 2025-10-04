#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace  std ;

 class Student {

     public:

       string name;
       double prevScore;
       double attendance;
       double studyHours;
       double extracurricular;

        double predictedScore;
        string Grade ;
         string recomendation;


         Student() : prevScore(0), attendance(0),studyHours(0) , extracurricular(0), predictedScore(0),Grade(""),recomendation("") {}
         Student(string n, double P , double a , double s , double e) : name(n),prevScore(P) , studyHours(s) , extracurricular(e),
         predictedScore(0),Grade(""), recomendation(" "){}
 };

 #endif