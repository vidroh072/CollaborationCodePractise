#include <iostream>
using namespace std;
int main(){
    int ar[]={8,-5,22,65,130,45,3};
    int passenger=0;
    double revenue=0;
    int count_senior=0;
    int count_child=0;
    int count_adult=0;
    for(int i=0;i<7;i++){
        if(ar[i]<0||ar[i]>120){
            cout<<"age not vaild"<<endl;
            continue;
        }
        
        else if(ar[i]<12){
            revenue+=0;
            count_child+=1;
           
        }
        else if(ar[i]<60){
            revenue+=5;
            count_adult+=1;
            
        }
        else if (ar[i]>=60||ar[i]<120){
            revenue+=2.5;
            count_senior+=1;
        }
        
            passenger+=1;

    }
    cout<<"Total passenger count:"<<passenger<<endl;
    cout<<"total revenue collected:"<<revenue<<endl;
    cout<<"senior:"<<count_senior<<endl;
    cout<<"child:"<<count_child<<endl;
    cout<<"adult:"<<count_adult;
}