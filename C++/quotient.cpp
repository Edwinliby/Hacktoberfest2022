#include<iostream>
using namespace std; 

int main (){
    double numerator, denominator, quotient; 
    cout << "Enter the numerator: "; 
    cin >> numerator; 
    cout << "Enter the denominator: "; 
    cin >> denominator; 

    while(denominator == 0){
        cout << "Invalid denominator. Please re-endter." << endl; 
        cout << "Enter the denominator: "; 
        cin >> denominator; 
    }

    quotient = numerator/denominator;
    cout << "The decimal value is " << quotient; 
    
    return 0; 
}