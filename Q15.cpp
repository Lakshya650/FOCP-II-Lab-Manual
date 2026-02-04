#include<iostream>
using namespace std;

int main(){
    int n,greatest=0;
    char choice;
    cout<<"Enter Sales Figure "<<endl;
    do{
        cin>>n;
        if (n>greatest){
            greatest = n;
        }
        cout<<"Do you want to enter more?"<<endl;
        cin>>choice;
    }while(choice=='y'|| choice=='Y');

    cout<<"Greatest Sales Figure= "<<greatest<<endl;

    return 0;

}