#include <iostream>
using namespace std;
int main () {
    int n;
    double sum = 0;
    int totalFreq = 0;

    cout << "Enter number of data values: ";
    cin >> n;

    for (int i =0; i<n; ++i) {
        double dataValue;
        int freq;
        cout << "Enter data values " << (i+1) << " : ";
        cin >> dataValue;
        cout << "Enter frequncy for data value  " << dataValue << " : ";
        cin >> freq;
        sum += dataValue*freq;
        totalFreq += freq;

    }

    double mean = sum/totalFreq;
    cout << "Arithmatic mean is : " << mean << endl;
}
