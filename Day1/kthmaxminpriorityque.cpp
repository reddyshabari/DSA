#include <bits/stdc++.h>

using namespace std;

// Fuction to find K-th smallest element
int Kth_smallest(int arr[], int n, int K) {
    // create a max heap
    priority_queue < int > pq;
    // insert first K element in queue
    for (int i = 0; i < K; i++) {
        pq.push(arr[i]);
    }
    // interest the remaining element
    for (int i = K; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > K)
            pq.pop();
    }
    // return K-th smallest element
    return pq.top();
}
//Driver function.
int main() {
    int n;
    n = 5; // size of array
    int arr[] = { 5, 3, 9, 2, 7 };
    int K;
    K = 3;
    int ans = Kth_smallest(arr, n, K);
    cout << "K-th smallest element:- ";
    cout << ans << endl;
}