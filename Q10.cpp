#include<iostream>
using namespace std;

int main(){
    int  yr;
    cout<<"Enter Year"<<endl;
    cin>>yr;

    if(yr%400==0 || yr%4==0 && yr%100!=0){
        cout<<"Entered Year is a LEAP year"<<endl;
    }
    else{
        cout<<"Entered Year is not a LEAP year"<<endl;
    }


}