
// #include <bits/stdc++.h> 
// using namespace std; 

// char matrix[105][105];
// int vs[105][105]={0};
// int result[10000000]={0},temp=1;
// int n,c,d;
// int MIN=INT_MAX;
// void output(){
//     string s="";
//     for(int i=1;i<=100;i++){
//         if(result[i]==1) s+='D';
//         if(result[i]==2) s+='R';
//         if(result[i]==3) s+='L';
//         if(result[i]==4) s+='U';
//     }
//     int temp=1;
//     for(int i=1;i<s.size();i++){
//         if(s[i]!=s[i-1]) temp++;
//     }
//     MIN=min(MIN,temp);
// }

// void callback(int a,int b){
//     if(a<n&&matrix[a+1][b]==1&&vs[a+1][b]==0) {
//         result[temp++]=1;  vs[a+1][b]=1;
//         callback(a+1,b);
//         result[--temp]=0; vs[a+1][b]=0;
//     }   

//    //L
//     if(b>1&&matrix[a][b-1]==1&&vs[a][b-1]==0) {
//        result[temp++]=2; vs[a][b-1]=1;
//        callback(a,b-1);
//        result[--temp]=0;vs[a][b-1]=0;
//    }

//    //R
//     if(b<n&&matrix[a][b+1]==1&&vs[a][b+1]==0) {
//         result[temp++]=3;  vs[a][b+1]=1;
//         callback(a,b+1);
//         result[--temp]=0; vs[a][b+1]=0;
//     }

//    //U   
//     if(a>1&&matrix[a-1][b]==1&&vs[a-1][b]==0) {
//        result[temp++]=4; vs[a-1][b]=1;
//        callback(a-1,b);
//        result[--temp]=0;vs[a-1][b]=0;
//    } 
//     if(a==c+1&&b==d+1) {
// 	   	output();
//    }
// }

// main(){ 
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         string temp; cin>>temp;
//         for(int j=1;j<=n;j++){
//             if(temp[j-1]=='.') matrix[i][j]=1;
//             else matrix[i][j]=0;
//         }
//     }
//     int a,b;
//     cin>>a>>b>>c>>d;
//     callback(a+1,b+1);
//     cout<<MIN;
// } 

