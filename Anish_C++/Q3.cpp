#include <iostream>
using namespace std;
int main(){
    int ar[]={100,200,3000,4000,20,30,40};
    for (int i=0;i<7;i++){
        if(ar[i]>=200){
            cout<<"transaction of rs:"<<ar[i]<<",Scartch card unlocked"<<endl;
        }
        else{
            cout<<"transaction  of rs:"<<ar[i]<<",Regular tranction"<<endl;
        }    

        }
    
    return 0;
}