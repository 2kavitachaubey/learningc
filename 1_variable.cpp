#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    float height = 2.16;

    string name , nickname;
    cout<<"Enter your Name: ";
    cin>>name;

    cout<<"Enter your nickname: ";
    cin>>nickname;
    
    if(age>4){
        cout<<"My name is "<< name <<" but  you can call me "<<nickname<<".";
        cout<<"I'm " <<age<< " year old and my height is "<< height <<"ft.";
    }
    else{
        cout<<"Jo tumhari shamajh na aye samjho shinchan ne hi sab kiya";
    }
    return 0;
}