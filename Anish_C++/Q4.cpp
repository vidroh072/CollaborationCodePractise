#include <iostream>
using namespace std;
int main(){
    double baseprice[]={200,300,1500,7000,1100};
    string clas[]={"general","sleeper","3rd ac","1st ac","2nd ac"};
    bool isPeakrush;
    string day;
    cout<<"Enter a day :";
    cin>>day;
    if(day=="saturday"||day=="sunday"){
        isPeakrush=true;

    }else{
        isPeakrush=false;
    }
    if(isPeakrush){
        for(int i=0;i<5;i++){
            baseprice[i]*=1.20;
        }
    }
    for(int i=0;i<5;i++){
        if(baseprice[i]<500){
            cout<<"budget friendly :"<<clas[i]<<" : "<<baseprice[i]<<endl;
        }
        else if(baseprice[i]>=500||baseprice[i]<=1100){
            cout<<"moderate:"<<clas[i]<<" : "<<baseprice[i]<<endl;

        }
        else{
            cout<<"premium :"<<clas[i]<<" : "<<baseprice[i]<<endl;
        }
    }

}