#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void simplify(string &A, unordered_map<char, int> &M, bool anti){
    stack<int> S;
    int n = A.size(), sign;
    for(int i=0; i<n; i++){
        if(A[i] >= 'a' && A[i] <= 'z'){
            sign = 1;
            if(i>0 && A[i-1] == '-')
                sign = -1;
            if(!S.empty() && S.top() < 0)
                sign = sign < 0 ? 1 : -1;
            M[A[i]] = anti ? M[A[i]]-sign : M[A[i]]+sign;
        }
        else if(A[i] == '('){
            sign = 1;
            if(i>0 && A[i-1] == '-')
                sign = -1;
            if(!S.empty() && S.top() < 0)
                sign = sign < 0 ? 1 : -1;
            S.push(sign);
        }
        else if(A[i] == ')'){
            S.pop();
        }
    }
}

bool isSimilar(string &A, string &B){
    unordered_map<char, int> M;
    simplify(A, M, true);
    simplify(B, M, false);
    for(auto &p : M){
        if(p.second != 0)
            return false;
    }
    return true;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        string A, B;
        cin>>A>>B;
        if(isSimilar(A,B)){
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
	return 0;
}