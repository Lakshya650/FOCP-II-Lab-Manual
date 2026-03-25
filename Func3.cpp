#include<iostream>
using namespace std;

int Result(int s1,int s2){
    return (s1+s2);

}
int Result(int s1,int s2,int s3){
    return (s1+s2+s3);
}
int Result(int s1,int s2,int s3,int s4){
    return (s1+s2+s3+s4);
}
int Result(int s1,int s2,int s3,int s4,int s5){
    return (s1+s2+s3+s4+s5);
}

int main(){
    cout<<"Result of any 2 subjects "<<Result(45,58)<<endl;
    cout<<"Result of any 3 subjects "<<Result(57,68,95)<<endl;
    cout<<"Result of any 4 subjects "<<Result(78,49,65,77)<<endl;
    cout<<"Result of any 5 subjects "<<Result(45,69,84,56,75)<<endl;
    
    return 0;
}
