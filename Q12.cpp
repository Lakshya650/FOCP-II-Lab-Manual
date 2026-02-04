//Q12

#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3;

    cout<<"Enter SIDE 1"<<endl;
    cin>>s1;
    cout<<"Enter SIDE 2"<<endl;
    cin>>s2;
    cout<<"Enter SIDE 3"<<endl;
    cin>>s3;

    if(s1==s2 && s2==s3){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(s1==s2 && s2!=s3 || s1!=s3){
        cout<<"Issoceles Triangle"<<endl;
    }
    else if(s2==s3 && s1!=s2 || s1!=s3){
        cout<<"Issoceles Triangle"<<endl;
    }
    else{
        cout<<"Scalene Triangle"<<endl;
    }
}