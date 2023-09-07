#include<iostream>
using namespace std;

float kmIntoMiles(int km){
    return 1.62*km;
}

int main(){
    int km;
    cout<<"Enter the kms : ";
    cin>>km;
    cout<<kmIntoMiles(km);
    return 0;
}