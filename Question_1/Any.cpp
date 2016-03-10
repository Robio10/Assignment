#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array \n";
    cin >> n;
    vector <int > V(n);
    cout << "Enter element in array \n";
    for(int i = 0; i < n; i++)
        cin >> V[i];
    cout << "Enter value \n";
    cin >> n;
    sort(V.begin(), V.end());
    for (int i = 0; i < V.size() - 2; i++){
        int l = i + 1;
        int r = V.size()-1;
        while (l < r){
            if( V[i] + V[l] + V[r] == n){
                cout << "Element is: \n";
                cout << V[i] <<" "<< V[l] <<" "<< V[r] << endl;
                break;
            }
            else if (V[i] + V[l] + V[r] < n)
                l++;
            else
                r--;
        }
    }
    return 0;
}
