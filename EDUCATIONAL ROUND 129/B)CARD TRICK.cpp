#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("-03")
#define watch(x) cout<< (#x) <<" = " <<(x)<<endl
#define PI double(2*acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i = 0; i < n; i++){
            cin>> arr[i];

        }
        long long x;
        long long sum = 0;
        long long m;
        cin >> m;
        for(long long  i = 0; i < m; i++){
            cin >> x;
            sum += x;

        }
        sum %= n;
        cout << arr[sum] <<"\n";

    }
    return 0;

}
