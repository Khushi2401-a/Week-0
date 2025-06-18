#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int i;
    for(i=1;i<=N;i++){
        if(i%3 == 0 && i%5 != 0 ){
            cout<<"Hello"<< " ";
        }
      else  if(i%5 == 0 && i%3 != 0){
            cout<<"World"<<" ";
        }
       else if(i%5 == 0 && i%3 == 0){
            cout<< "Hello World"<< " ";
        }
       else {
        cout<<i<<" ";
       }
    }
    return 0;
}