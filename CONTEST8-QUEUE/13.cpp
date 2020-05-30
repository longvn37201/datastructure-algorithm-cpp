
#include <bits/stdc++.h>
using namespace std;

vector<int> RESULT;

// so K la valid
bool valid(int num){
    set<int> st;
    string s=to_string(num);
    for(int i=0;i<s.size();i++){
        int temp= int(s[i]-'0');
        if(temp>5|| st.find(temp)!=st.end()) return false;
        else st.insert(temp);
    }
    return true;

}

// tao sang gia tri tu 1 den 100000 theo gioi han L R
void createArrRes(){
    queue<int> q;
    // q.push(0);
    for(int i=1;i<=5;i++)  q.push(i);

    while(true){

        if(!RESULT.empty()&& RESULT.back()>=54321) break;
        
        int temp=q.front(); q.pop();
        RESULT.push_back(temp);
        for(int i=0;i<=5;i++){
            if(valid(temp*10+i)) {
                // cout<<temp*10+i<<" ";
                q.push(temp*10+i);
            }   
        }
    }

}

int solve(int l, int r){
    int count=0;
    for(int i=0;i<RESULT.size();i++){
        if(RESULT[i]>=l&&RESULT[i]<=r) { 
            // cout<<RESULT[i]<<" "; 
            count++;
        }
        if(RESULT[i]>r) break;
    }
    return count;
}

main(){
    // cout<<valid(6);
    createArrRes();
    // test 
    // for(int i=0;i<RESULT.size();i++) cout<<RESULT[i]<<" ";   
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        cout<<solve(l,r)<<endl;
    }
}
