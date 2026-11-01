#include <iostream>
using namespace std;
int main(){
    int ar[]={4,15,30,62,75};
    for(int i=0;i<5;i++){
        if (ar[i]<12){
            cout<<"Child,Fare=0"<<endl;
            continue;
        }
        else if(ar[i]<60){
            cout<<"Standard Adult,Fare=5"<<endl;
            continue;
        }
        else{
            cout<<"senior,Fare=2.5"<<endl;
            continue;
        }
        return 0;
    }
}
    