#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x; //x Represents value and n Represents size of array
    vector<int> arr;
    cout<<"Enter The Number Of Elements"<<endl;
    cin>>n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << endl;
        cin >> x;
        arr.push_back(x);  // Dynamically resizing
    }
    cout << "Heap Dynamic Array in C++:"<<endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}
