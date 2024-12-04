#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;

#define ll long long

const int N = 1e6+7;
const int inf = 1e9;
string s;
int t1,t2,tp1,tp2,ls1[N],ls2[N],l[N],fl1[N],fl2[N],kmp[N];
map <string,int> mp;

void solve(int las[], int fl[], int &t) { 
	mp.clear(); for(int i = 1; i <= 1000000; i ++ ) l[i] = -inf;
	int tp = 0;
	for(int i = 1; cin >> s && s[0] != '$'; i ++ ) {
		t++;
		if(!mp[s]) mp[s] = ++tp; 
		int x = mp[s]; fl[i] = x;
		if(l[x] == -inf) las[i] = inf;
		else las[i] = i-l[x]; l[x] = i;
	}
}

bool check(int i, int j) {
	if(ls2[j+1] == inf && ls1[i] < j+1) return false;
	if(ls2[j+1] != inf && fl1[i] != fl1[i-ls2[j+1]]) return false;
	return true;
}

bool pd(int i, int j) {
	if(ls2[j+1] == inf && ls2[i] < j+1) return false;
	if(ls2[j+1] != inf && fl2[i] != fl2[i-ls2[j+1]]) return false;
	return true;
}

int main() {
	solve(ls1, fl1, t1);
	solve(ls2, fl2, t2);
	int j = 0;
	for(int i = 2; i <= t2; i ++ ) {
		while(!pd(i, j) && j) j = kmp[j];
		if(pd(i, j)) j++;
		kmp[i] = j;
	}
	j = 0;
	for(int i = 1; i <= t1; i ++ ) {
		while(j && !check(i, j)) j = kmp[j];
		if(check(i, j)) j++;
		if(j == t2) { cout << i-j+1; return 0; }
	}
}
