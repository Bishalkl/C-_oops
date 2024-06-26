// Creating a simple calculator first project of opps
#include <iostream>
using namespace std;


// creating a class 
class Opeartion{
    // setuping a data member
public:
    float a, b;

    // creating all the method use for basic calculator

    // for addition
    float sum(float a, float b){
        return a + b;
    }

    // for subtraction
    float sub(float a, float b){
        return a - b;
    }

    // for division
    float division(float a, float b){

        if (b != 0){
            return a / b;
        } else {
            cout << "Division error";
            return 0;
        }

    }

    // for multiplication
    float product(float a, float b){
        return a * b; 
    }

};

// creating main function to run and complile all the code
int main(){

    // for user
    cout << "1 for addition" << endl;
    cout << "2 for multiplication" << endl;
    cout << "3 for division" << endl;
    cout << "4 for subtraction" << endl;


    // for option 
    int user;
    float num1, num2;
    cout << "Enter the option: ";
    cin >> user;
    

    // creating a object
    Opeartion op;

    // input from user
    cout << "Enter a first number";
    cin >> num1;
    cout << "Enter a second number";
    cin >> num2;

    // condition for opeartion
    switch(user){
        case 1:
            cout << "Result: " << op.sum(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << op.product(num1, num2) << endl;
            break;
        case 3: 
            cout << "Result: " << op.division(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << op.sub(num1, num2) << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;

    }


    return 0;
}
