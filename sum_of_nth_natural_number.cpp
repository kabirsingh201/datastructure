#include<bits/stdc++.h>
using namespace std;
int ADD(int n){
    if(n==0){
        return 0;
    }
    else{
        return ADD(n-1)+n;
    }
        
    }
   

int main() {
    int n,a;
    cin>>n;
    a=ADD(n);
    cout<<a;
    return 0;
}
