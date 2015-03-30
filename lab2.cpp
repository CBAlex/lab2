#include<iostream>
#include <string>
#include<fstream>
#include "BMI.h"

using namespace std;

int main()
{
    int i=0,k;
    float hi,ma;
    BMI person[10];
    fstream fin;
    fin.open("file.in",ios::in); 
    
    while(fin>>hi>>ma)
        {
            if(hi==0)
            break;
            
            person[i].getheight(hi);
            person[i].getmass(ma);
            i=i+1;

        }

    int j;
    fstream fout;
    fout.open("file.out",ios::out);
    for(j=0;j<i;j++)
    {
        fout<<person[j].result()<<" ";
        person[j].getlevel();
        
        if(person[j].setlevel()==1)
            {fout<<" Very severely underweight"<<endl;}   
        if(person[j].setlevel()==2)
            { fout<<" Severely underweight"<<endl;}   
        if(person[j].setlevel()==3)
            {fout<<" Underweight"<<endl;}   
        if(person[j].setlevel()==4)
            {fout<<" Normal "<<endl;}
        if(person[j].setlevel()==5)
            {fout<<" Overweight "<<endl;}
        if(person[j].setlevel()==6)
            {fout<<" Obese Class I (Moderately obese)"<<endl;}
        if(person[j].setlevel()==7)
            {fout<<" Obese Class II (Severely obese) "<<endl;}
        if(person[j].setlevel()==8)
            {fout<<" Obese Class III (Very severely obese)"<<endl;}
    }
        
        cout<<i<<" people"<<endl;

        return 0;
}

