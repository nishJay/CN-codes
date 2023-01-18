#include <bits/stdc++.h>
using namespace std;
int main() {
    int numBits;int numNumbers;
    cout << "Enter the number of bits: ";
    cin >> numBits;
    cout << "Enter the number of numbers: ";
    cin >> numNumbers;
    
    string sum = "";
    cout << "Enter the numbers"<<endl;
    for (int i = 0; i < numNumbers; i++) {
        string number;
        cin >> number;
        while (number.size() < sum.size()) 
            number += '0';
        for (int j = 0; j < sum.size(); j++) {
            sum[j] = (number[j] == '1' ? '0' : '1') ^ sum[j];
        }
    }

    if(sum.length() > numBits)
        sum = sum.substr(0, numBits);
    else if(sum.length() < numBits)
        sum = string(numBits - sum.length(), '0') + sum;
    cout << "Checksum: ";
    for (int i = 0; i < numBits; i++)
        sum[i] == '0' ? cout << '1' : cout << '0';
    return 0;
}
