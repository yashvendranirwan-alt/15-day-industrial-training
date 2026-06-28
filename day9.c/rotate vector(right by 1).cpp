#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n, x, k;

    cout << "Enter the size of vector (n): ";
    cin >> n;

    if(n <= 0) {
        return 0;
    }

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter the number of positions to rotate (k): ";
    cin >> k;

    k = k % n;

    vector<int> temp(n);

    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = v[i];
    }

    v = temp;

    cout << "Vector after rotation: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
