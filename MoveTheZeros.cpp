#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a[n];
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        count++;
    }
}
for(int j=n-1;j>=n-count;j--){
    a[j]=0;
}

int j=0;

for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
                    a[j++] = arr[i];
        }
    }

for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

return 0;
}