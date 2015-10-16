#include <stdio.h>
#include <string.h>
#define SET(p) memset(p, -1, sizeof(p))
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define getcx getchar_unlocked
#define MX 9999999

using namespace std;

inline int fi (){//fast input function
    register int c = getcx();
    int x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getcx());
    if(c=='-') {neg=1;c=getcx();}
    for(;c>47 && c<58;c = getcx()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    return x;
}


// you can also write your own min,absolute functions using this 
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }

int a[MX], b[MX];



int main() {

	// when you want to take input from input.txt just uncommment the next line
	// READ
	// similarly next line is for output.txt
	// WRITE


	int t;//number of test cases
	scanf("%d",&t);
	while(t--){
		// erase this line and start coding from here.
	}
	return 0;
}
// this template can be used with both c and c++.
// c++ is backwards compatible, scanf() and printf() also work in c++