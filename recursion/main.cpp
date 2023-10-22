#include <iostream>
using namespace std;

void printName(int n) {// tc- O(N) sc- O(N)
  if(n== 0) {
    return ;
  }
  cout<<"Pranali is so cool."<<endl;
  n--;
  printName(n);
}

void print1ToN(int m, int n) {
  if(m > n) {
    return ;
  }
  cout<<m<<endl;
  m++;
  print1ToN(m,n);

  // becktracking
  //  if(m <= 0) {
  //   return ;
  // }
  // print1ToN(m-1,n);
  // cout<<m<<endl; 
}

void printNto1(int n) {
  if(n== 0) {
    return ;
  }
  cout<<n<<endl;
  n--;
  printNto1(n);
}

void sumOfNNumbers(int m, int n) {
  if(m < 1) {
    cout<< "sum:"<<n;
    return ;
  }
  sumOfNNumbers(m-1,n+m);
}

void factorialOfN(int m, int n) {
  if(m < 1) {
    cout<< "sum:"<<n;
    return ;
  }
  factorialOfN(m-1,n*m);
}

void reverseArray(int m[], int start, int end) {
   if (start < end) {
      swap(m[start], m[end]);
      reverseArray(m, start + 1, end - 1);
   }
}

bool isPalindrome(int i, string& s) {
  if(i>=s.length()/2) return true;
  if(s[i]!=s[s.length()-i-1]) return false;
  return isPalindrome(i+1,s);
}

void fibonacciSeriesOfN(int m, int n, int x) {
  if(m >= x) {
    return ;
  }
  if(m == 0) {
    cout<<m<<endl;
  }
  cout<<n<<endl;
  fibonacciSeriesOfN(n, m+n, x);
}

int main() {
  int n;
  cin>>n;
  fibonacciSeriesOfN(0,1,n);
  // string n = "ranaar";
  // int size = n.size();
  // cout<<isPalindrome(0,n);
  // int arr[] = {5,4,3,2,1};
  // reverseArray(arr,0, n-1);
  // cout << "The reversed array is:- " << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }
  return 0;
}