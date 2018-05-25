#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Please type a number:";
    cin >> num;
    int sum;
    while(num>0){
        sum=sum+num;
        num--;
    }
    cout << "The sum of all the numbers up to the number given is:" << sum << endl;
    return 0;
}