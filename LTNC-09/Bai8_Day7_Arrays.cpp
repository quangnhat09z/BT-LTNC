using namespace std;
#include <iostream>
void inputArray(int a[], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void printArray(int a[], int n){
    for (int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
}
int main(){
    int n; cin >> n; int a[n];
    inputArray(a,n);
    printArray(a,n);
    return 0;
}

