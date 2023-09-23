// 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // Number of data points
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> midpoints; // Midpoints of the class intervals
    vector<int> frequencies;  // Frequencies of each class

    cout << "Enter the midpoints and frequencies of each class:" << endl;
    for (int i = 0; i < n; i++) {
        double midpoint;
        int frequency;
        cout << "Midpoint for class " << (i + 1) << ": ";
        cin >> midpoint;
        cout << "Frequency for class " << (i + 1) << ": ";
        cin >> frequency;
        midpoints.push_back(midpoint);
        frequencies.push_back(frequency);
    }

    double sum_midpoint_frequencies = 0; // Sum of (Midpoint * Frequency)
    int sum_frequencies = 0;            // Sum of Frequencies

    for (int i = 0; i < n; i++) {
        sum_midpoint_frequencies += midpoints[i] * frequencies[i];
        sum_frequencies += frequencies[i];
    }

    double mean = sum_midpoint_frequencies / sum_frequencies;

    cout << "Arithmetic Mean using Step Deviation Method: " << mean << endl;

    return 0;
}
