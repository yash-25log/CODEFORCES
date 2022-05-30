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
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];

        }
        sort(arr,arr + n);

        int a,b;

        a = arr[n-1];
        cin >> n;

        int arr2[n];
        for(int i = 0; i < n; i++){
            cin>>arr2[i];

        }
        sort(arr2 ,arr2 + n);

        b = arr2[n-1];

        if(a < b){
            cout<< "Bob\nBob\n";
        }
        else if(a == b){
            cout<<"Alice\nBob\n";

        }
        else{
            cout<< "Alice\nAlice\n";
        }
    }
    return 0 ;

}
