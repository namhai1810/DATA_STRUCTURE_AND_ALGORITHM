#include<iostream>
#include<math.h>
using namespace std;
inline bool Prime(long long n,bool isPrime[]){
	isPrime[0] = isPrime[1] = false;
	for (int i=2; i<=n; i++)
        isPrime[i] = true;
for (int p=2; p*p<=n; p++)
    {
        if (isPrime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                isPrime[i] = false;
        }
    }
	return true;

}
int main(){
	int n;
	cin>>n;
	long long k,mark;
	while(n!=0){
		mark =1;
		n--;
		cin>>k;
		bool isPrime[k+1];
		Prime(k, isPrime);
		for(int i = 2;i<k;i++){
			if(isPrime[i] && isPrime[k-i]){
				cout<<i<<" "<<k-i<<endl;
				mark = 0;
				break;
			}
		}
		if(mark ==1) cout<<"-1"<<endl;
	}

}
