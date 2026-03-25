#include<iostream>
using namespace std;

int main(){
    string a,b;                         //s was Capital 
    cout<<"Enter two strings";          //Opposite >>
    cin>>a;                             //Opposite <<
    cin>>b;                              //Opposite <<
    int count[26]={0};
    for(int i=0;i<=a.length();i++){         //length was not ended with ()
        count[a[i]-'a']++;
        count[b[i]-'a']--;
    }
   for(int i=0;i<26;i++){
        if(count[i]!=0){                    //if was ended with ;
            cout<<"Not Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;                     
}





    