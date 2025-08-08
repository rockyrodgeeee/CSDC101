#include <iostream>// input and output library
using namespace std;// standard namespace for cin and cout

int main (){
    
    int num1,num2,sum;// integer variables
    
    cout<<"Enter a number: ";//output enter number 
    cin>>num1;//user input number 
    cout<< "Enter another number: ";//output another number
    cin>>num2;//user input another number
    sum = num1 / num2;//set value of sum as num 1 + num 2
    cout<<"The sum of the two numbers is: "<<sum;//output sum of numbers
    
     return 0;
}
