#include <iostream>
using namespace std;
//Question3
double calculateSum(int n, double sum) {
    if (n == 0) {
        return sum;
    } else {
        sum += pow(-1, n + 1) / n;
        return calculateSum(n - 1, sum);
    }
}




// Question 4
double sum2() {// it won't take any parameter
    double number;
    int result = 0;
    cout << "Please enter a number :" << endl;
    cin >> number;
    if (number < 0) {
        cout << "Please enter higher number";

    } else {
        return sum2();
    }

}





int main() {



    //Question 3
    int user_input;
    cout << "Please enter a number: ";
    cin >> user_input;

    double result = calculateSum(user_input, 0);
    cout << "Sum is : " << result << endl;




    // Question 4

    result = sum2();
    cout << "Result is :"<< result<< endl;
    return 0;


}
