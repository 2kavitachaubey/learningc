#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"vector1:"<<endl;
    cout<<vector1.at(0)<<" ";
    cout<<vector1.at(1)<<endl;
    cout<<"vector1 contains "<< vector1.size()<<" elements"<<endl<<"\n";        //size

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"vector2:"<<endl;
    cout<<vector2.at(0)<<" ";
    cout<<vector2.at(1)<<endl;
    cout<<"vector1 contains "<<vector1.size()<<" elements"<<endl<<"\n";     //size

    vector <vector<int>> vector_2D;    //two dimensional vector    
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    cout<<"vector_2D:"<<endl;
    cout<<vector_2D.at(0).at(0)<<" "<< vector_2D.at(0).at(1)<<endl;
    cout<<vector_2D.at(1).at(0)<<" "<< vector_2D.at(1).at(1)<<endl<<"\n";

    vector1.at(0) =1000;
    cout<<"vector1:"<<endl;
    cout<<vector1.at(0)<<" ";
    cout<<vector1.at(1)<<endl;
    cout<<"vector1 contains "<< vector1.size()<<" elements"<<endl<<"\n";
}