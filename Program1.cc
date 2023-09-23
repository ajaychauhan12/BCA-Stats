#include <iostream>
using namespace std;

int main() {
    int n = 0 ;
    double sum = 0;

    cout << "Enter number of data values: ";
    cin >> n;

    for (int i = 0; i<n; ++i) {
        double dataValue;
        cout << "Enter data values: " << i+1 <<  ":" ;
        cin >> dataValue;
        sum += dataValue;


    }

    double mean = sum/n;
    cout << "Arithmatic mean is : " << mean << endl;
    return 0;
}
