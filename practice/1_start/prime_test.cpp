#include<bits/stdc++.h>
// #include<math.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
bool isPrime(int n)
{
    if (n == 1) 
        return 0;
    for (int i = 2; i<sqrt(n); i++ ) {
        if(n % i == 0) 
            return 0;
    }
    return 1;
}

int main()
{
    OJ;
    int t , n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(isPrime(n)){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
    
    return 0;
    
}