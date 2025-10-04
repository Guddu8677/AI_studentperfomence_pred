#ifndef PREDICTOR_H
#define PREDICTOR_H


#include"student.h"


class Predictor{

    private: 
           double wScore, wAttendanced, wHours, wEXTRA;

    public:
          Predictor(double ws=0.4 , double wa=0.3 , double wh=0.2 , double we = 0.1) : wScore(ws),wAttendanced(wa),wHours(wh), wEXTRA(we){}
          void predict(Student &s) {

             if(s.predictedScore >= 90 ) s.Grade= "A";
             else if(s.predictedScore >= 75) s.Grade = "B";
             else if(s.predictedScore >= 50) s.Grade="C";
             else s.Grade = "D";



             s.recomendation = " ";
             if(s.attendance < 75) s.recomendation += "Increase you addendance";
             if(s.studyHours < 10) s.recomendation += "Study more than this ";
             if(s.prevScore < 50) s.recomendation += "Focus on  weak subject";
          }

};

#endif