#include <bits/stdc++.h>
using namespace std;

vector<int> kth_prime_list;

void sieve(int n)
{
    vector<bool>prime(n+1, true);
    prime[0]=prime[1]=false;

    for(int i=2; i*i<=n; i++){
        if(prime[i]){
            for(int j=i*i; j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]){
           kth_prime_list.push_back(i);
        }
    }
}
int main()
{
    sieve(90000000);
    int n; cin>>n;
    while(n--)
    {
        int k; cin>>k;
        cout<<kth_prime_list[k-1]<<endl;
    }
    return 0;
}