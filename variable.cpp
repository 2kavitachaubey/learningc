#include<iostream>
using namespace std;
int main(){
    int age =5;
    string nickName,realName;
    cout<<"Enter your realName and nickname:";
    cin>>realName>>nickName;
    float height = 2.1;
    if(age>4){
        cout<<"My name is "<< realName <<" but  you can call me "<<nickName<<".";
        cout<<"I'm " <<age<< " year old and my height is "<< height <<"ft.";
    }
    else{
        cout<<"Jo tumhari shamajh na aye samjho shinchan ne hi sab kiya";
    }
    return 0;
}