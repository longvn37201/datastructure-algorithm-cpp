#include<bits/stdc++.h>
using namespace std;
long long a[1000009],GREATER[1000009],SMALLER[1000009],n;

void createGreater(){
    vector<int> STACK;
    for(int i=n-1;i>=0;i--){
        while(!STACK.empty()&&a[STACK.back()]<=a[i]){
            STACK.pop_back();
        }
        if(STACK.empty()) GREATER[i]=-1;
        else GREATER[i]=STACK.back();
        STACK.push_back(i);
    }
}

void createSmaller(){
    vector<int> STACK;
    for(int i=n-1;i>=0;i--){
        while(!STACK.empty()&&a[STACK.back()]>=a[i]){
            STACK.pop_back();
        }
        if(STACK.empty()) SMALLER[i]=-1;
        else SMALLER[i]=STACK.back();
        STACK.push_back(i);
    }
}


void solution(){

    createGreater();
    createSmaller();

    for(int i=0;i<n;i++){
        if(GREATER[i]!=-1&&SMALLER[GREATER[i]]!=-1){
            cout<<a[SMALLER[GREATER[i]]]<<" ";
        }else cout<<-1<<" ";
    }
    cout<<endl;
}

main(){
	long long t;
	cin>>t;
	while(t--){
        cin>>n; for(int i=0;i<n;i++) cin>>a[i];
        solution();
	}
}



//  index 0 1 2 3 4 5 6
//  value 5 1 9 2 5 1 7 

// Tìm NextGreater[]{
//     Stack<int> S
//     i = arr.size()-1 => 0

//     i=6 => stack:empty  NG[6]=-1;            stack: 6
//     i=5 => stack:6      NG[5]= 6(topStack)   stack: 6 5
//     i=4 => stack: 6     NG[4]=6              stack: 6 4
//     i=3 => stack: 6 4   NG[3]=4              stack: 6 4 3
//     i=2 => stack: empty NG[2]=-1             stack 2
//     i=1 => stack: 2     NG[1]=2              stack 2 1
//     i=0 => stack: 2     NG[0]=2              stack 2 0
// }

// Tim NextSmaller
// ....

