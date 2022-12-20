#include<bits/stdc++.h>
using namespace std;
int n ;
char a[100];
void print(){
    for(int i = 0; i <n; i++) cout<<a[i];
    cout<<endl;
}
bool check(){
    for(int i = 1; i <n-1; i++){
        if(a[i] == 'A' || a[i] == 'E'){
            if((a[i-1] != 'A' && a[i-1] != 'E'))
           if((a[i+1] != 'A' && a[i+1] != 'E')) {cout<<i<<" "<<a[i]<<" "<<a[i-1]<<" "<<a[i+1]<<" ";return false;}
        }
    }
    return true;
}
int main(){
    a[0] ='D';
    a[1] = 'C';
    a[2] = 'B';
    a[3] = 'E';
    a[4] = 'A';
    //DCBEA
    n = 'E' - 'A' +1;
    cout<<n<<endl;
    if(check() == true)
     print();
    else 
    cout<<"0";

}