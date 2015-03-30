#include<iostream>
#include<string>
using namespace std;

class BMI
{
private:
 float height;
 float mass;
 float comresult;
 int level;
public:
   BMI();
   float getheight(float);
   float getmass(float);
   float setheight();
   float setmass();
  float result();
  void getlevel();
  int setlevel();
 };

