
#include<bits/stdc++.h> 
using namespace std; 
  long long hist[1000000];
// The main function to find the maximum rectangular  
// area under given histogram with n bars 
long long getMaxArea(long long hist[], long long n) 
{ 
    // Create an empty stack. The stack holds indexes  
    // of hist[] array. The bars stored in stack are  
    // always in increasing order of their heights. 
    stack<long long> s; 
  
    long long max_area = 0; // Initialize max area 
    long long tp;  // To store top of stack 
    long long area_with_top; // To store area with top bar 
                       // as the smallest bar 
  
    // Run through all bars of given histogram 
    long long i = 0; 
    while (i < n) 
    { 
        // If this bar is higher than the bar on top  
        // stack, push it to stack 
        if (s.empty() || hist[s.top()] <= hist[i]) 
            s.push(i++); 
  
        // If this bar is lower than top of stack,  
        // then calculate area of rectangle with stack  
        // top as the smallest (or minimum height) bar.  
        // 'i' is 'right index' for the top and element  
        // before top in stack is 'left index' 
        else
        { 
            tp = s.top();  // store the top index 
            s.pop();  // pop the top 
  
            // Calculate the area with hist[tp] stack  
            // as smallest bar 
            area_with_top = hist[tp] * (s.empty() ? i :  
                                   i - s.top() - 1); 
  
            // update max area, if needed 
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
  
    // Now pop the remaining bars from stack and calculate 
    // area with every popped bar as the smallest bar 
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area_with_top = hist[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
  
    return max_area; 
} 
  
// Driver program to test above function 
 main() 
{ 
    long long t;cin>>t;
    while(t--){
        long long n; cin>>n; 
        for(long long i=0;i<n;i++) cin>>hist[i];
        // long long hist[] = {6, 2, 5, 4, 5, 1, 6}; 
        // long long n = sizeof(hist)/sizeof(hist[0]); 
        cout  << getMaxArea(hist, n)<<endl; 

    }
} 





// 6 2 5 4 5 1 6

// i=0{
//     stack empty
//         stack: 0
// }
// i=1{
//     stack:0
//         top: 1
//         stack empty
//         areaTop=hist[top]*i=6*1=6
//         max=6;

//     stack empty
//         stack:1

// }
// i=2{
//     stack:1
//         stack:1 2
// }
// i=3{
//     stack:1 2
//         top:2
//         stack: 1
//         areaTop= 5*(3-1-1)=5
//         max=6
//     stack: 1 3
// }
// i=4{
//     stack:1 3 4
// }
// i=5{
//     stack:1 3 4
//         top:4
//         stack:1 3
//         areaTop=5*(5-3-1)=5
//         max=6
//     stack:1 3 
//         top:3
//         stack:1
//         areaTop=4*(5-1-1)=12
//         max=12    
//     stack:1 5    
// }
// i=6{
//     stack:1 5 6
// }

// remaining
// While(!stack.empty()){
//     top:6
//     stack:1 5
//     areaTop= 6*(6-5-1)

//     top:5
//     stack:1
//     areaTop= 1*(6-1-1)=4
// }