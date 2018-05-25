#include<iostream>
#include<cmath>
using namespace std;
double futureValue(float present, float interest, int months) {
    double future;
    future = pow((1 + interest), months);
    future = future * present;
    return future;
}
int main()
{
    cout.precision(2);
    float present;
    do {
        cout << "Please type the current amount inside your account:";
        cin >> present;
    } while (present < 0);
    float interest;
    do {
        cout << "Please type your monthly interest rate:";
        cin >> interest;
    } while (interest <= 0);
    interest=interest/100;
    int months;
    do {
        cout << "Please type the number of months ahead you wish to calculate:";
        cin >> months;
    } while (months <= 0);
    cout << fixed;
    cout << "The future value of your bank account is a whopping...$" << futureValue(present, interest, months) << ". Don't spend it all in one future place." << endl;
    return 0;
}