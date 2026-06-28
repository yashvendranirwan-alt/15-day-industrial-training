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

    vector<int> unique_v;

    for(int i = 0; i < v.size(); i++){
        bool isDuplicate = false;
        for(int j = 0; j < unique_v.size(); j++){
            if(v[i] == unique_v[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            unique_v.push_back(v[i]);
        }
    }

    v = unique_v;

    cout << "Vector after removing duplicates: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
