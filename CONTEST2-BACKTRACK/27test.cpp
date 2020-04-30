// #include <bits/stdc++.h>
// using namespace std;
// int n,k,a[200],b[200],sum,testCase;

// bool check(){
//     for(int i=1;i<=k;i++){
//         int testSum=0;
//         for(int j=1;j<=n;j++){
//             if(b[j]==i) testSum+=a[j];
//         }
//         // cout<<testSum;
//         if(testSum!=sum/k) return 0;
//     }
//     return 1;

// }

// void backTrack(int i,int test){
//     for(int j=1;j>=0;j--){
//         b[i]=j;
//         sum+=a[i]*b[j];
//         if(tapCon()){
//             mark();

//         }
//         if(i!=n) backTrack(i+1);
//     }

// }

// main(){
//     int t;cin>>t;
//     while(t--){
//         sum=0;testCase=0;
//         cin>>n>>k; for(int i=1;i<=n;i++) {cin>>a[i];sum+=a[i];}
//         if(sum%k!=0);
//         else{
//             backTrack(1,0);
//         }
//         testCase?cout<<1:cout<<0;
//         cout<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

// Recursive Utility method to check K equal sum
// subsetition of array
/** 
    array           - given input array 
    subsetSum array   - sum to store each subset of the array 
    taken           - boolean array to check whether element 
                      is taken into sum partition or not 
    K               - number of partitions needed 
    N               - total number of element in array 
    curIdx          - current subsetSum index 
    limitIdx        - lastIdx from where array element should 
                      be taken */
bool isKPartitionPossibleRec(int arr[], int subsetSum[], bool taken[],
                             int subset, int K, int N, int curIdx, int limitIdx)
{
    if (subsetSum[curIdx] == subset)
    {
        /*  current index (K - 2) represents (K - 1) subsets of equal 
            sum last partition will already remain with sum 'subset'*/
        if (curIdx == K - 2)
            return true;

        //  recursive call for next subsetition
        return isKPartitionPossibleRec(arr, subsetSum, taken, subset,
                                       K, N, curIdx + 1, N - 1);
    }

    //  start from limitIdx and include elements into current partition
    for (int i = limitIdx; i >= 0; i--)
    {
        //  if already taken, continue
        if (taken[i])
            continue;
        int tmp = subsetSum[curIdx] + arr[i];

        // if temp is less than subset then only include the element
        // and call recursively
        if (tmp <= subset)
        {
            //  mark the element and include into current partition sum
            taken[i] = true;
            subsetSum[curIdx] += arr[i];
            bool nxt = isKPartitionPossibleRec(arr, subsetSum, taken,
                                               subset, K, N, curIdx, i - 1);

            // after recursive call unmark the element and remove from
            // subsetition sum
            taken[i] = false;
            subsetSum[curIdx] -= arr[i];
            if (nxt)
                return true;
        }
    }
    return false;
}

//  Method returns true if arr can be partitioned into K subsets
// with equal sum
bool isKPartitionPossible(int arr[], int N, int K)
{
    //  If K is 1, then complete array will be our answer
    if (K == 1)
        return true;

    //  If total number of partitions are more than N, then
    // division is not possible
    if (N < K)
        return false;

    // if array sum is not divisible by K then we can't divide
    // array into K partitions
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];
    if (sum % K != 0)
        return false;

    //  the sum of each subset should be subset (= sum / K)
    int subset = sum / K;
    int subsetSum[K];
    bool taken[N];

    //  Initialize sum of each subset from 0
    for (int i = 0; i < K; i++)
        subsetSum[i] = 0;

    //  mark all elements as not taken
    for (int i = 0; i < N; i++)
        taken[i] = false;

    // initialize first subsubset sum as last element of
    // array and mark that as taken
    subsetSum[0] = arr[N - 1];
    taken[N - 1] = true;

    //  call recursive method to check K-substitution condition
    return isKPartitionPossibleRec(arr, subsetSum, taken,
                                   subset, K, N, 0, N - 1);
}

//  Driver code to test above methods
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        // testCase = 0;
        // sum = 0;
        // cin >> n >> k;
        // for (int i = 1; i <= n; i++)
        // {
        //     cin >> a[i];
        //     sum += a[i];
        // }
        // if (k > n)
        //     ;
        // else if (sum % k != 0)
        //     ;
        // else
        // {
        //     sum /= k;
        //     fuckingServer(1);
        // }

        // testCase ? cout << 1 : cout << 0;
        // cout << endl;

        int N,K; cin>>N>>K; int arr[N]; for(int i=0;i<N;i++) cin>>arr[i];

        if (isKPartitionPossible(arr, N, K))
            cout <<1;
        else
            cout << 0;
        cout<<endl;
    }
}