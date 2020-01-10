#include<iostream>

using namespace std;

int main(){
    double N;
    string Name;
    cout<<"What is your name?: ";
    cin>>Name;
    cout<<"What is your GPA?: ";
    cin>>N;
    if(N>=3.50){
        cout<<Name<<" Inw Jrim Jrim!!!";
    }else{
        cout<<"Try harder, "<<Name<<"!!!";
    }
    return 0;
}
