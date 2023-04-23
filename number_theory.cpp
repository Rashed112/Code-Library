#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool marked[M]; //by default all values are zero/false

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    return marked[n] == false;
}

bool sieve_of_eratosthenes(int n){
    for(int i=3; i*i <= n; i+=2){
        if(marked[i] == false){ //i is a prime
            for(int j=i*i; j<=n; j+=i){
                marked[j]=true;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isPrime(n)){
            cout<<n<<" is a prime!!"<<endl;
        }
        else{
            cout<<n<<" isn't a prime!"<<endl;
        }
    }
}
