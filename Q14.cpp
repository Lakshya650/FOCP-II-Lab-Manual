#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter number1"<<endl;
    cin>>a;
    cout<<"Enter Number2"<<endl;
    cin>>b;

    int choice;
     cout<<"Enter Choice "<<endl;
     cout<<"1. Addition "<<endl;
     cout<<"2. Substraction "<<endl;
     cout<<"3. Multiply "<<endl;
     cout<<"4. Divide "<<endl;
    cin>>choice;
    
    switch(choice){

        case 1:
        cout<<"Addition "<<a+b<<endl;
        break;
        case 2:
        cout<<"Substraction "<<a-b<<endl;
        break;
        case3:
        cout<<"Multiply "<<a*b<<endl;
        break;
        case 4:
        cout<<"Divide "<<a/b<<endl;
        break;

        default:
        cout<<"Invalid"<<endl;
    }


}