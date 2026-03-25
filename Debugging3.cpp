#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)      //for was ended with ;        
    {
        cout<<" ";                              //no space was given in cout
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=i;j>=1;j--){                      //Two equal were added for j==i
        cout<<j;
    }
    cout<<endl;                                  //endl is in comma
    }
}