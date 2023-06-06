#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    unordered_set<int> uniqueEvens;
    int sum = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) {
            uniqueEvens.insert(arr[i]);
        }
    }

    for (int even : uniqueEvens) {
        sum += even;
    }

    cout << sum<< endl;

    return 0;
}
