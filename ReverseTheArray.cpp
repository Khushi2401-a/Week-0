#include <iostream>
using namespace std;

void reverseArray(int arr[] ,int n ,int M){
    int p = M+1;
    int q = n-1;
    while(p<q){
    int temp = arr[p];
    arr[p] = arr[q];
    arr[q] = temp;
    p++;
    q--;
}
}


int main(){
int n,M;
cin>>n>>M;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
for(int i =0;i<=M;i++){
    cout<<arr[i]<<" ";
}
reverseArray(arr,n,M);
for(int i =M+1;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
