#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define um unordered_map<ll,ll>
#define mp map<ll,ll>
#define pq priority_queue<ll, vector<ll>>
#define spq priority_queue<ll, vector<ll>, greater<ll>>
#define sp setprecision
#define bp pop_back
#define pb push_back
#define ph push
#define lb lower_bound
#define up upper_bound
#define FR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

struct Queue{

    int *arr;
    int front, cap, size;
    Queue(int c){

        arr = new int(c);
        cap = c;
        front = 0; 
        size = 0;

    }

    bool isFull(){

        return (cap == size);

    }
    bool isEmpty(){

        return (size == 0);

    }
    int getFront(){

        if (isEmpty()) return -1;
        return front;

    }
    int getRear(){

        if (isEmpty()) return -1;
        return (front + size -1) % cap;

    }
    void enqueue(int x){

        if (isFull()) return;
        int rear = getRear();
        rear = (rear+1) % cap;
        arr[rear] = x;
        size++;

    }
    void dequeue(){

        if(isEmpty()) return;
        front = (front+1) % cap;
        size--; 

    }

};

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

     

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/
