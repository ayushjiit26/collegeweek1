#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n]={0};
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int avg;
    for (int i=0; i<n; i++){
        avg += arr[i];
    }
    cout << (avg/n);
    return 0;
}
