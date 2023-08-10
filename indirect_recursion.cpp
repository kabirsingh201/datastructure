#include<bits/stdc++.h>

using namespace std;

void funA(int n);
void funB(int n){
    if(n>0){
        cout<<n<<" ";
        funA(n-1);
    }
}

void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
int main(){

funA(3);

    return 0;
}