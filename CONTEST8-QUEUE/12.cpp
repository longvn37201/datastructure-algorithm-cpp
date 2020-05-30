
// {del1:POON, PLEE, SAME, del3:POIE, del5:PLEA, del4:PLIE, del2:POIN}
// toon->plea

// Q: toon           lv=1
//     {
//         {
//             word=toon;
//             Q: empty;
//                find out: poon
//                Q: poon
//         }

//     }

// Q: poon          lv=2
//     {
//         {
//             word=poon;
//             Q:empty;
//                 find out: poin;
//                 Q: poin
//         }
//     }    

// Q: poin          lv=3
//     {
//         {
//             word=poin;
//             Q: empty
//                 find out: poie;
//                 Q: poie
//         }
//     }

// Q: poie         lv=4
//     {
//         {
//             find out: plie
//         }
//     }
// Q: plie         lv=5   
//     {
//         {
//             find out: plee
//         }
//     }
// ..........    lv=6
//     {
//         findout plea; return 7;
//     }    


#include <bits/stdc++.h> 
using namespace std; 
  
int minWay(string start, string target, set<string> dictionary) 
{ 
  
    //    target khong tim thay trong dic
    if (dictionary.find(target) == dictionary.end()) 
        return 0; 
  
    // To store the current chain length 
    // and the length of the words 
    int count = 0, wordLength = start.size(); 
  
    // Push start vao queue
    queue<string> Q; 
    Q.push(start); 
  
    // While  queue  non-empty 
    while (!Q.empty()) { 
  
        // tang count
        ++count; 
  
        int sizeofQ = Q.size(); 
  
        // lap tung tu tu front trong queue
        for (int i = 0; i < sizeofQ; ++i) { 
  
            string word = Q.front(); 
            Q.pop(); 
  
            // voi moi char of front-string thi tim xem next char co trong dic khong?
            for (int pos = 0; pos < wordLength; ++pos) { 
  
                //restore sau moi lan tim
                char orig_char = word[pos]; 
  
                
                for (char c = 'A'; c <= 'Z'; ++c) { 
                    word[pos] = c; 
  
                    // ra target luon thi return
                    if (word == target) 
                        return count + 1; 
  
                    
                    if (dictionary.find(word) == dictionary.end()) 
                        continue; 
                    dictionary.erase(word); 
  
                //    tim thay thi push vao q
                    Q.push(word); 
                } 
  
                // restore
                word[pos] = orig_char; 
            } 
        } 
    } 
  
    return 0; 
} 
  
main() 
{ 
    int t;cin>>t;
    while(t--){
        int n; string start,target;
        cin>>n>>start>>target;
        set<string> dictionary;  
        string temp;
        for(int i=1;i<=n;i++){
            cin>>temp;
            dictionary.insert(temp);
        }

        cout << minWay(start, target, dictionary)<<endl; 
    }
} 