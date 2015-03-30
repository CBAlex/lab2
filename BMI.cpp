#include <string>
#include <fstream>
#include "BMI.h"

using namespace std;

    BMI::BMI()
        { height=0;
          mass=0;
          level=0;
        }
        
    float BMI::getheight(float hi)
        {
          height=hi;
        }
        
    float BMI::getmass(float ma)
        {
          mass=ma;
        }
        
    float BMI::setheight()
        {return height;}
    float BMI::setmass()
        {return mass;}
    float BMI::result()
        {  
            float a=(mass/((height/100)*(height/100)));
            comresult=a;
            return a;
        }
    void BMI::getlevel()
    {
        int outset=0;
        if(comresult<15)
        {outset= 1;}
        if(comresult>=15&&comresult<16)
        {outset= 2;}
        if(comresult>=16&&comresult<18.5)
        {outset= 3;}
        if(comresult>=18.5&&comresult<25)
        {outset= 4;}
        if(comresult>=25&&comresult<30)
        {outset= 5;}
        if(comresult>=30&&comresult<35)
        {outset= 6;}
        if(comresult>=35&&comresult<40)
        {outset= 7;}
        if(comresult>=40)
        {outset= 8;}
        level=outset;
    }

    int BMI::setlevel()
    {
        return level;
    }

