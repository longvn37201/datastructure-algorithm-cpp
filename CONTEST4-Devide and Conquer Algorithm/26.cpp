#include <bits/stdc++.h>
using namespace std;

int charToInt(char c) {
   if(c >= '0' && c<='9')
      return int(c)-'0';    
   return int(c)-'A'+10;    
}

char intToChar(int n) {
   if(n >= 0 && n <=9)
      return char(n+'0');    
   return char(n+'A'-10);    
}

int NToDec(string number, int base) {
   int power = 1;
   int num = 0;

   for(int i = number.size()-1; i>= 0; i--) {    
      if(charToInt(number[i]) >= base)
         return -1;    //  >= base thi khong chuyen duoc
      num += charToInt(number[i])*power;
      power = power*base;
   }
   return num;
}

string decToN(int dec, int base) {
   string res = "";    
   while(dec > 0) {
      res += intToChar(dec%base);
      dec /= base;
   }

   reverse(res.begin(), res.end());    //reverse tu dau den cuoi => result
   return res;
}

int main() {
   int base;
   string num1, num2;
    cin >> base>> num1>> num2;
   cout<<decToN((NToDec(num1, base) + NToDec(num2, base)), base);
}