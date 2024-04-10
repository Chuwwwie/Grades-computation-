#include <iostream>
using namespace std;

int main() {
    int i, n;
    float sum = 0, avg;

    for (i = 1; i <= 8; i++) {
        cout << "Enter your grade " << i << ": ";
        cin >> n;
        sum += n;
    }

    avg = sum / 8;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
