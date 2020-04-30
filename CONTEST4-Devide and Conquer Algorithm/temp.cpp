
using namespace std;  
const int maxn=1000010;  
int num[maxn],temp[maxn],n;  
bool judge(int mid){  
    if(mid<(n+1)/2)return false;  
    for(int i=mid+1;i<=n;++i){  
        if(num[i]*2>num[i-mid])return false;  
    }  
    return true;  
}  
bool cmp(int a,int b){  
    return a>b;  
}  
int main()  
{  
    scanf("%d",&n);  
    for(int i=1;i<=n;++i){  
        scanf("%d",&num[i]);  
    }  
    sort(num+1,num+n+1,cmp);  
    for(int i=1;i<=n;i++) cout<<num[i]<<" ";

    int left=1,right=n,ans;  
    
    while(left<=right){  
        int mid=(left+right)/2;  
        if(judge(mid)){  
            ans=mid;  
            right=mid-1;  
        }  
        else {  
            left=mid+1;  
        }  
    }  
    printf("%d\n",ans);  
    return 0;  
}
//28