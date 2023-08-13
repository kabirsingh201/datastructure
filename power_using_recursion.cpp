#include<bits/stdc++.h>
using namespace std;
int pow(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
        
    }
   

int main() {
    int m,n,a;
    cin>>n>>m;
    a=pow(m,n);
    cout<<a;
    return 0;
}
