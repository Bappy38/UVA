#include<bits/stdc++.h>

#define Input                   freopen("in.txt","r",stdin)
#define Output                  freopen("out.txt","w",stdout)
#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scin2(x,y)              sc("%d %d",&(x),&(y))
#define scln(x)                 sc("%lld",&(x))
#define scln2(x,y)              sc("%lld %lld",&(x),&(y))
#define pf                      printf
#define all(a)                  (a.begin()),(a.end())
#define UNIQUE(X)               (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)          (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define ms(a,b)                 memset(a,b,sizeof(a))
#define pb(a)                   push_back(a)
#define mp                      make_pair
#define db                      double
#define EPS                     10E-10
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define vi                      vector<int>
#define vl                      vector<ll>
#define vii                     vector<vector<int> >
#define vll                     vector<vector<ll> >
#define DBG                     pf("HI\n")
#define MOD                     1000000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define RUN_CASE(t,T)           for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)                 printf("Case %d: ",t)
#define CASEl(t)                printf("Case %d:\n",t)
#define intlimit                2147483690
#define longlimit               92233720368547758
#define infinity                (1<<28)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mxx                     123456789
#define PI                      2*acos(0.0)
#define rep(i,a,b)              for(__typeof(i) i=a;i<=b;i++)
#define rev(i,a,b)              for(__typeof(i) i=a;i>=b;i--)

using namespace std;
/**     toint, tostring, BigMod, Power , sieve, Primefactorize ,frequency in n!     **/
//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
//ll Power(ll a,ll n){ll ret=1;for(ll i=1 ; i<=n ; i++)ret = ((ret%MOD)*(a%MOD))%MOD;return ret;}
//vector<ll>Prime;
//bool mark[10000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;Prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){Prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}
//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++){if(n%Prime[i] == 0){while(n%Prime[i] == 0){Factor[Prime[i]]++;n/=Prime[i];}}}if(n>1){Factor[n]++;}}
//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}
/**     Order Set       **/
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(0)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4 //cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl;  // 0 //cout<<X.order_of_key(1)<<endl;   // 0 //cout<<X.order_of_key(3)<<endl;   // 2 //cout<<X.order_of_key(4)<<endl;   // 2 //cout<<X.order_of_key(400)<<endl; // 5
///------------------Graph Moves-------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///Knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///Knight's move

///PlEaSe AvOiD InTeGeR OvErFlOw
/**
Problem:
অফিসে বসের উপর প্রতিশোধ নিতে বসের কম্পিউটার এবং সার্ভার এর মধ্যকার সংযোগ বিচ্ছিন্ন করতে চাচ্ছেন আপনি। কিন্তু বসের কম্পিউটার কিংবা সার্ভারে সরাসরি হাত দেয়া যাবে না। এছাড়া এই সংযোগ এ থাকা অন্য কম্পিউটার গুলোর মধ্যকার তার কাটতে প্রয়োজনীয় কোস্ট দেয়া আছে।
সর্বনিম্ন কত খরচে বসের কম্পিউটার এর সাথে সার্ভার এর সংযোগ বিচ্ছন্ন করা যাবে?
Solution:
1.  Here, every machine except BOSS & SERVER can be destroyed with a cost.
    So, we've to split out each of the nodes(machine). As,we can't destroy
    BOSS and SERVER with cost so their edge cost will be infinity.
    And others edge cost will be the cost of that node(machine).
2.  Then we'll connect pair of nodes(machine) through edge(wire) that r given.
3.  Then, the maxFlow will be the ans as we can find out the minimum cost
    to destroy a path in FordFulkerson algorithm. And sum of min cost is the
    max flow. So,max flow is the ans.
**/
#define sz 109
int n,e,par[sz],cap[sz][sz],flow[sz][sz];
bool vis[sz];

bool BFS(int src,int des)
{
    ms(vis,0);
    queue<int>q;
    q.push(src);
    vis[src] = 1;
    par[src] = -1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v=1 ; v<=2*n ; v++){
//            cout<<u<<" - "<<v<<" = "<<cap[u][v]<<endl;
            if(!vis[v] && (cap[u][v]-flow[u][v])>0){
                q.push(v);
                vis[v] = 1;
                par[v] = u;
            }
        }
    }
    return vis[des];
}
int FordFulkerson(int src,int des)
{
    int u,v,mxFlow=0;
    while(BFS(src,des)){
        int mnPathFlow = infinity;
        for(v=des ; v!=src ; v=par[v]){
            u = par[v];
            mnPathFlow = min(mnPathFlow , cap[u][v]-flow[u][v]);
        }
        for(v=des ; v!=src ; v=par[v]){
            u = par[v];
            flow[u][v] += mnPathFlow;
            flow[v][u] -= mnPathFlow;
        }
        mxFlow += mnPathFlow;
    }
    return mxFlow;
}
void Clean()
{
    for(int i=0 ; i<=2*n+1 ; i++){
        for(int j=0 ; j<=2*n+1 ; j++){
            cap[i][j] = 0;
            flow[i][j] = 0;
        }
    }
}

int main()
{
    int i,j,k,t,T,ans,u,v,x,y,c;
    while(1){
        scin2(n , e);
        if(n == 0 && e == 0)
            break;
        /** Slit the nodes of machine **/
        cap[1][1+n] = infinity;
        cap[1+n][1] = infinity;
        cap[n][n+n] = infinity;
        cap[n+n][n] = infinity;
        for(i=2 ; i<=n-1 ; i++){
            scin2(x , c);
            cap[x][x+n] = c;
            cap[x+n][x] = c;
        }
        /** Connect machine through wire **/
        for(i=1 ; i<=e ; i++){
            scin2(x,y);
            scin(c);
            u = x+n;
            v = y;
            cap[u][v] = c;
            v = x;
            u = y+n;
            cap[u][v] = c;
        }
        ans = FordFulkerson(1 , n+n);
        pf("%d\n",ans);
        Clean();
    }
    return 0;
}

