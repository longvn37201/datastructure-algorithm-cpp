#include <bits/stdc++.h>
using namespace std;

// freq struct
struct frequency{
    char c;
    int value;
};

// create freq 
int createFreq(frequency freq[],string s){
    int index=0;
    for(int i=0;i<s.size();i++){
        freq[index].c=s[i]; freq[index].value=1;
        for(int j=i+1;j<s.size();j++){
            if(s[j]==s[i]){
                freq[index].value++;
                s.erase(s.begin()+j); j--;
            }
        }
        index++;
    }
    return index;
}

//sort freq 
void sortFreq(frequency freq[],int sizeFreq){
    for(int i=0;i<sizeFreq-1;i++)
        for(int j=i+1;j<sizeFreq;j++)
            if(freq[j].value>freq[i].value)
                swap(freq[i],freq[j]);
}

// result
bool handle(frequency freq[], int sizeFreq,int sizeS,int d){
    // string result="";
    bool visited[sizeS]={false};

    // duyet tung vi tri xep freq[i], neu tra
    for(int i=0;i<sizeFreq;i++){
        int j=0;
        while(visited[j]) j++;
        // for(int k=0;k<freq[i].value;k++)
        if(j+(freq[i].value-1)*d>sizeS) return false;
        visited[j]=true;
    }
    return true;
}



main(){
    int t; cin>>t;
    while(t--){
        int d; string s; cin>>d>>s;
        int sizeS=s.size();


        frequency freq[26];
        //initialization struct freq[]
        int sizeFreq=createFreq(freq,s);
        // sort in descending order
        sortFreq(freq,sizeFreq);
        cout<<(handle(freq,sizeFreq,sizeS,d)?1:-1)<<endl;


        // BAI 12
        // int test=freq[0].value-1; 
        // if(2*test<sizeS) cout<<1; else cout<<-1;
        // cout<<endl;

        

    }   
}