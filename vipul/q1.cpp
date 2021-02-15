#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define FOR(i, a, b) for(int i=a; i<(b); ++i)
#define FORD(i, a, b) for(int i=(b-1); i>=a; --i)

#define deb(x) cout << #x << " " << x << '\n'

const char nl = '\n';

template <class T> void swap(T &a, T &b);

void solution(){
    //write your code here
    ll n; cin >> n;
    vl A(n); for(ll i=0; i<n; ++i) cin >> A[i];
    
    
}

int main() {
    //fast i/o
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T=1;
    // cin >> T;
    while(T--){
        solution();
    }
    return 0;
}

/*
ASCII OF NUMBERS 0-9             ==> [48, 57]
ASCII OF UPPERCASE ALPHABETS A-Z ==> [65, 90]
ASCII OF LOWERCASE ALPHABETS a-z ==> [97, 122]
ASCII OF WHITESPACE              ==> [32]
ASCII OF SPECIAL CHARACTERS I    ==> [33, 47]
ASCII OF SPECIAL CHARACTERS II   ==> [58, 64]
ASCII OF SPECIAL CHARACTERS III  ==> [91, 96]
ASCII OF SPECIAL CHARACTERS IV   ==> [123, 126]
ASCII OF VOWELS                  ==> [97/65, 101/69, 105/73, 111/79, 117/85]

SPECIAL CHARATERS I ==> [!,",#,$,%,&,',(,),*,+...,/]
VOWELS              ==> [a/A, e/E, i/I, o/O, u/U]
*/

/* ROMAN NUMERALS
I - 1		
V - 5		IV - 4
X - 10		IX - 9
L - 50		XL - 40
C - 100		XC - 90
D - 500		CD - 400
M - 1000	CM - 900
*/

template <class T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}