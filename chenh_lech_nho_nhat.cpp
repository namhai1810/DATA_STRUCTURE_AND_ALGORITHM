#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	long long i,j,n,k,MIN;
	long long arr[100000];
	cin>>k;
	while(k--){
		MIN=1000000;
		cin>>n;
		for(long long h=0;h<n;h++){
			cin>>arr[h];
		}
	sort(arr,arr+n);
	for(i=0;i<n-1;i++){
		if((arr[i+1]-arr[i])<MIN){
			MIN=arr[i+1]-arr[i];
		}
	}
			cout<<MIN<<endl;
		}
	
		
		
	return 0;
}

