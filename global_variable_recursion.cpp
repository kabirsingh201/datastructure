#include<bits/stdc++.h>
int x=0;
int fun(int n){

    
    if(n>0){
        x++;
        return fun(n-1)+x;
    }

    return 0;

}
using namespace std;
int main(){
int a=fun(5);
cout<<a<<endl;

    return 0;
}