#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n, x;

    cout << "Enter the size of vector (n): ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    int max_val = v[0];

    for(int i = 1; i < v.size(); i++){
        if(v[i] > max_val){
            max_val = v[i];
        }
    }

    cout << "Maximum element = " << max_val << endl;

    return 0;
}
