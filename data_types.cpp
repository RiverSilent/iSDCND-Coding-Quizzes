#include <iostream>

using namespace std;

int main(){

	// TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the 
    // second floating point number.

    float num1 = 12.07;
    float num2 = 65.102;
    
    
    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.

    float float_sum = num1+num2;
    
    
    // TODO: Calculate difference between the second and first number
    // output the results to cout. 
    float diff = num1-num2;
    cout<<"Subtraction: "<<diff<<endl;
    
    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    float div = num2/num1;
    cout<<"Division: "<<div<<endl;
    
    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    float prod = num1*num2;
    cout<<"Product: "<<prod;

	return 0;
}