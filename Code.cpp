#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int size = 2 * n;
    int* arr =  new int[size];
    
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int maxCapacity = arr[1];
    int currentCapacity = arr[1];

    for(int i = 2; i < size; i+=2) {
        currentCapacity -= arr[i];
        // cout << currentCapacity << " ";
        currentCapacity += arr[i + 1];
        // cout << currentCapacity << endl;
        maxCapacity = max(maxCapacity, currentCapacity);
        // cout << maxCapacity << endl;
    }
    cout << maxCapacity << "\n";
    return 0;
}
