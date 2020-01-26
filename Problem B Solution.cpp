#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;


// Sort the given coordinates in ascending values
// and see if the difference b/w the x and y respective coordinates
// is positive or not. If not then ans is NO else carry out the 
// sum of the string with R first then U for lexicographical ordering

// Time complexity: O(t*nlogn)

int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll n,x,y,flag=0;
		cin >> n;
		vector< pair<ll,ll> > a;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			a.push_back({x,y});
		}
		sort(a.begin(),a.end());
		string s ="";
		ll r = a[0].first - 0;
		ll u = a[0].second -0;
		while(r>0){
			s+='R';
			r--;
		}
		while(u>0){
			s+='U';
			u--;
		}
		for(int i=1;i<n;i++){
			r = a[i].first - a[i-1].first;
			u = a[i].second - a[i-1].second;
			if(r<0 || u<0){
				cout << "NO" << endl;
				flag=1;
				break;
			}
			while(r>0){
				s+='R';
				r--;
			}
			while(u>0){
				s+='U';
				u--;
			}
		}
		if(flag==0){
			cout << "YES" << endl;
			cout << s << endl;
		}
	}
}