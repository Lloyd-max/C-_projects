#include <iostream>
using namespace std;

int main()
{
    int cents = 0;
    cout<<"Please enter the number of cents in South African cents"<<endl;
    cin>>cents;
    //Our goal now is to give the highest value of R5,R2, and R1 as possible
    //Its important to break down your code into segments
    //500 cents make R5,200 cents make R2 and 100 cents make R1
    //We are going to create variables to store the change
    int change_5;
    int change_2;
    int change_1;
    
    //Attempt to figure out the best mathematical calculations
    change_5 = cents / 500;
    //Remember alter the value of cents as we get the change for each number
    cents = cents % 500;
    
    change_2 = cents / 200;
    cents = cents % 200;
    
    change_1 = cents / 100;
    cents = cents % 100;

    //We are going to display the change
    cout<<"****Change****"<<endl;
    cout<<""<<endl;
    cout<<"R5:"<<change_5<<endl;
    cout<<"R2:"<<change_2<<endl;
    cout<<"R1:"<<change_1<<endl;
    cout<<"Cents left: "<<cents<<endl;
    return 0;
}