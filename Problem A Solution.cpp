#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

/*Applying normal mathematical solution to the problem 
  A+a = B+b = C+c = x(say) and A+B+C= n and each individual
  entity should be positive*/

// Time Complexity: O(t)

int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll a,b,c,n;
		cin >> a >> b >> c >> n;
		ll sum = n + a + b + c;
		ll out = sum/3;
		if(sum%3==0 && (out-c)>=0 && (out-b)>=0 && (out-a)>=0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}