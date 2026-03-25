#include<iostream>
using namespace std;

class student{
int rollno;
string name;
int marks1;
int marks2;
int marks3;
public:

void inputDetails(){
    cout<<"Enter RollNo,Name,marks1,marks2,marks3:";
    cin>>rollno>>name>>marks1>>marks2>>marks3;
}
int calculateTotal(){
    return(marks1+marks2+marks3);
}
void displayDetails(){
    cout<<"Roll No: "<<rollno<<" Name: "<<name;
    cout<<" Marks1: "<<marks1<<" Marks2 :"<<marks2<<" Marks3 :"<<marks3;
    cout<<" Total :"<<calculateTotal()<<endl;
}
};

int main(){
    student s1;
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}