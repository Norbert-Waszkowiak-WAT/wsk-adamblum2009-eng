#include<iostream>
using namespace std;
void min_max(int* arr, int size, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
int main() {
    int t[] = { 1, 11, 121, 12, 3, 13, 31,32 };
    int a;
    int b;
    min_max(t, 8, &a, &b);
    cout<<"min "<<a<<endl<<"max "<<b<<endl;
    return 0;
}