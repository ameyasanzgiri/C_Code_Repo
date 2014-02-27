#include<stdio.h>
static const int M = 10000;
int main() {
	int p, q, id[M];
	for (int i = 0; i < M; i++) 
		id[i] = i;
	while ( cin >> p >> q ) {
		int t = id[p];
		if ( t == id[q] ) continue;
		for (i = 0; i < M; i++ ) {
			if ( id[i] == t) id[i] = id[q];
		cout << " " << p << " " << q << endl;
		}
}
		
