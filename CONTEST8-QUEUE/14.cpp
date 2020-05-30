// #include <bits/stdc++.h>
// using namespace std;

// bool compare(string s1, string s2){
// 	int num1=stoi(s1);
// 	int num2=stoi(s2);
// 	return num1<num2;
// }

// int sizeNum(int r){
// 	int count=0;
// 	int n=r;
// 	while(n){
// 		count++;
// 		n/=10;
// 	}
// 	return count;
// }
// int pow(int x,int y){
// 	for(int i=1;i<y;i++) x*=x;
// 	return x;

// }
// main(){
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;

//         vector<int> res;
//         queue<int> q;

//         q.push(44);
//         q.push(55);
//         int count=0;
//         while(true){
//             if(count==n) break;
//             count++;
//             int temp=q.front();
// 			int sizeTemp=sizeNum(temp);
//             q.pop();
// 			q.push( (4*pow(10,sizeTemp)+temp)*10+4 );
// 			q.push( (5*pow(10,sizeTemp)+temp)*10+5 );
//             // q.push("4"+temp+"4");
//             // q.push("5"+temp+"5");

// // 4 4213 4   40000
			
//             res.push_back(temp);
//         }

//         sort(res.begin(),res.end());
//         for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
//         cout<<endl;

//     }
// }


#include <bits/stdc++.h> 
using namespace std; 

// Function to print the first n pure numbers 
void nPureNumbers(int n) 
{ 

	queue<string> q; 
	vector<string> ans; 

	// Push the starting two elements 
	q.push("44"); 
	q.push("55"); 
	int total = 2; 

	// While generated numbers are less than n 
	while (ans.size() < n) { 

		string temp = q.front(); 
		q.pop(); 

		q.push("4" + temp + "4"); 
		ans.push_back(temp);  
		q.push("5" + temp + "5"); 
	} 

	// Sorting strings based on their value 
	sort(ans.begin(), ans.end(), [](auto s, auto s2) { 
		if (s.size() == s2.size()) 
			return s < s2; 
		else
			return s.size() < s2.size(); 
	}); 

	// Print first n pure numbers 
	for (auto i : ans) { 
		cout << i << " "; 
	} 
} 

// Driver code 
int main() 
{ 
	// int n = 10; 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
	nPureNumbers(n); 
	cout<<endl;
    }


	return 0; 
} 

