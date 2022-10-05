//a special number is a number that have sum of each digit equal to sum of prime factors is the product of M

#include <bits/stdc++.h>
using namespace std;

int a[1000005], b[1000005];
int primeFactors(int n)
{
    int c=2;
    i = 0;
    while(n>1)
    {
        if(n%c==0){
        i+=c;
        n/=c;
        }
        else c++;
    }
}   

int sumofeachdigit(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    
}
int main(){

    int n;
    cin >> n;
    t = sumofeachdigit(n);
    tt = primeFactors(n);
    if t = tt then
        cout << "YES\n";
    else
        cout << "NO\n";

}