#include<iostream>
#include<queue>
#include<string.h>
#define max 10005
using namespace std;
int T, s, d, digit[4];
int prime[max], dist[max];
// mảng prime đánh dấu số nào là số nguyên tố ( snt:-1 và ko là snt: 0)
// mảng dist để lưu số bước
void sieve() // để đánh dấu các số nt trong mảng prime
{
    for (int i = 2; i < 10000; i++)
    {
        if (prime[i])
        {
            int num = i;
            for (int j = 2; num*j <=max; j++)
                prime[num*j] =0;
        }
    }
}
void num_to_arr(int value[], int num)// chuyển 4 chữ số vào mảng
{
    for (int i = 3; i >= 0; i--)
    {
        value[i] = num % 10;
        num /= 10;
    }
}
int arr_to_num(int value[])// từ mảng ra số
{
    int res = 1000 * value[0] + 100 * value[1] + 10 * value[2] + value[3];
    return res;
}
int main()
{
    memset(prime, -1, sizeof(prime));
    sieve();
    cin >> T;//test case
    while (T--)
    {
        cin >> s >> d;
        memset(dist, -1, sizeof(dist));
        queue<int> q;
        q.push(s);
        dist[s] = 0;
        while (!q.empty())
        {
            s = q.front();
            q.pop();
            for (int i = 0; i <= 3; i++)// cố định 3 chữ số rồi chạy 3 chữ số còn lại để xét
            {
                num_to_arr(digit, s);
                for (int j = 0; j <= 9; j++)
                {
                    digit[i] = j;
                    int temp = arr_to_num(digit);
                    if (prime[temp] == -1 && temp > 1000 && dist[temp] == -1)// nếu số đó chưa đc xét và là snt thì đánh dấu số bước.
                    {
                        dist[temp] = dist[s] + 1;
                        q.push(temp);
                    }
                }
            }
        }
        if (dist[d] == -1)
            cout << "Impossible" << endl;
        else
            cout << dist[d] << endl;
    }
    return 0;
}




// 2
// kp 4 6 8 10 12 14 16 8 ....
// 3 
// kp 6 9 12 15 18 21 24 27
// 5
// kp 10 15 20 25 30 35 40 45
// 7
// kp 14 21 28 35 42 49 56 63.....
// 11
// ...
// ...
// ...