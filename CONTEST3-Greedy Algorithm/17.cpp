#include <bits/stdc++.h>
using namespace std;

int solution(int arr[],int index,int num){
    //tao mot hang doi uu tien freq voi top la max freq
    priority_queue <int,vector<int>> freq(arr,arr+index);

    // pop freq.top ra roi push -- no vao lai
    for(int i=0;i<num;i++){
        int temp=freq.top(); freq.pop(); freq.push(--temp);
    }

    int result=0;
    while(!freq.empty()){
        result+=freq.top()*freq.top();
        freq.pop();
    }
    return result;

}

main(){
    int t; cin>>t;
    while(t--){
        int num; string s;
        cin>>num>>s;
        int arr[100000]={0},index=0;

        // create arr freq cua s
        for(int i=0;i<s.size();i++){
            arr[index]++;
            if(i!=s.size()-1)
                for(int j=i+1;j<s.size();j++){
                    if(s[j]==s[i]){
                        arr[index]++;
                        s.erase(s.begin()+j); j--;
                    }
                }
            index++;    
        }

        cout<<solution(arr,index,num)<<endl;

        


    }
}