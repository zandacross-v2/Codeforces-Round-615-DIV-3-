#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

// Loop till squareroot on number and check the uniqueness of the number

// Time complexity: O(t*n)

int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll n,a,b,ans,c,flag=0;
		cin >> n;
		for(int i=2;i<sqrt(n);i++){
			if(n%i==0){
				a = i;
				ans = n/i;
				for(int j=i+1;j<sqrt(n);j++){
					if(ans%j==0){
						b=j;
						c = ans/j;
						if(c!=a && c!=b){
							flag=1;
						    break;
						}
					}
				}
				if(flag==1){
					cout << "YES" << endl;
					cout << a << " " << b << " " << c << endl;
					break;
				}
			}
		}
		if(flag==0){
			cout << "NO" << endl;
		}
	}
}