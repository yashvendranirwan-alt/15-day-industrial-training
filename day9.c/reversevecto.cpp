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

    int start = 0;
    int end = v.size() - 1;

    while(start < end){
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        
        start++;
        end--;
    }

    cout << "Reversed vector elements are: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
