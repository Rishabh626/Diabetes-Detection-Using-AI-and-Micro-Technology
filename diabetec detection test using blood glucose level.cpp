#include <iostream>
#include<cmath>
using namespace std;

void fasting_blood_suger_test(float fasting_glucose_level){
    if (fasting_glucose_level<99){
        cout<<"the person is normal";
    }
    else{
    if(fasting_glucose_level<125){
        cout<<"the person is prediabatic";
    }
    else{
        cout<<"the person is diabatic by type 1 diabetic";
    }
    cout<<" by fasting suger level test"<<endl;
    }
}

void glucose_tolorance_test(float glucose_level){
    if(glucose_level<140){
        cout<<"the person is normal";
    }
    else{
    if(glucose_level<199){
        cout<<"the person is prediabetic";
    }
    else{
        cout<<"the person is diabatic by type 2 diabatic";
    }
    }
    cout<<" from glucose tolarance test"<<endl;
}

int main(){
    cout<<"glucose level tested after fasting in mg/dl(before brekfast):126"<<endl;
    float suger_level_1=126;
    cout<<"suger level tested after 2 hours of glucose input in mg/dl:205"<<endl;
    float suger_level_2=205;
    fasting_blood_suger_test(suger_level_1);
    glucose_tolorance_test(suger_level_2);
    return 0;
}
