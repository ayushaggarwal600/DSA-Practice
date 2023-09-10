#include<iostream>
using namespace std;

float kmIntoMiles(float km){
    return 0.62*km;
}

int main(){
    float km;
    cout<<"Enter the kms : ";
    cin>>km;
    cout<<kmIntoMiles(km);
    return 0;
}