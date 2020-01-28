#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define ff first
#define ss second
using namespace std;

/*The modulo value shall always be the same with respect to x.
  The Store vector consists of the modulo values and the set
consists of  the updated pair after each query validates.
 Since the elements that won,t be covered would be the smallest count
  in the modulo array. Then follow the normal mathematics.*/

  // Time complexity: O(nlogn)
int main(){
    ll q,x,k;
    cin >> q >> x;
    vector<ll> store(x,0);
    set< pair<ll,ll> > mp;
    for(int i=0;i<x;i++){
        mp.insert({store[i],i});
    }
    while(q--){
        cin >> k;
        k=k%x;
        mp.erase({store[k],k});
        store[k]++;
        mp.insert({store[k],k});
        cout << mp.begin()->ff * x + mp.begin()->ss << endl;
    }
}
