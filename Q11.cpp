#include<iostream>
using namespace std;

int main(){
    int qty,unit_price;
    int total1=0,total2;
    float discount;
    char choice;
    do{
        cout<<"Enter Unit Price"<<endl;
        cin>>unit_price;
        cout<<"Enter Quantity"<<endl;
        cin>>qty;
        
        total1+=qty*unit_price;

        cout<<"Add more? (y/n)"<<endl;
        cin>>choice;
    
    }while(choice=='y'|| choice=='Y');

    if(total1<=1000){
        cout<<"Total Amount Rupees "<<total1<<endl;
    }
    else if(total1>1000){
        discount=0.10*total1;
        total2=total1-discount;
        cout<<"Total Amount Rupees "<<total2<<endl;
    }

    return 0;
}