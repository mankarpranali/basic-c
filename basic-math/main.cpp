#include<iostream>
#include<math.h>
using namespace std;

int countDigits (long long n) {
  int count = 0;
  while(n>0) {
    int last_digit = n % 10;
    count++;
    n = n/10;
  }
  return count;
}

int reserveOfNumber (int n) {
  int reverseNumber = 0;
  n *= -1;
  while(n>0) {
    int last_digit = n % 10;
    // cout<<"go"<<last_digit;
    reverseNumber = reverseNumber * 10 + last_digit;
    n = n/10;
  }
  return reverseNumber;
}
void isPalindromeNumber (int n) {
  int originalNumber = n;
  int reverseNumber = 0;
  while(n>0) {
    int last_digit = n % 10;
    reverseNumber = reverseNumber * 10 + last_digit;
    n = n/10;
  }
  if( originalNumber == reverseNumber) {
    cout<< "It is a palindrome number";
  } else {
    cout<< "It is not a palindrome number";
  }
}

void isArmstrongNumber (int n) {
  int originalNumber = n;
  int number = 0;
  while(n>0) {
    int last_digit = n % 10;
    number = number + last_digit * last_digit * last_digit;
    n = n/10;
  }
  if( originalNumber == number) {
    cout<< "It is an Armstrong number";
  } else {
    cout<< "It is not an Armstrong number";
  }
}

void printDivisionNumber (int n) {
  for(int i = 1 ; i<=sqrt(n); i++) {
    if (n % i == 0) {
      cout<<i<<" ";
    }
    if (n/i != i) {
      cout<<n/i<<" ";
    }
  }
  // using vector O(sqrt(n))
  // vector <int> ls;
  // for(int i = 1 ; i<=sqrt(n); i++) {
  //   if (n % i == 0) {
  //     ls.push_back(i);
  //   }
  //   if (n/i != i) {
  //     ls.push_back(n/i);
  //   }
  // }
  // sort(ls.begin(), ls.end())
  // for (auto: ls) {
  //   cout<<ls<<" ";
  // }
}

void isPrimeNumber (int n) {
  int count = 0;
  for(int i = 1 ; i*i<=n; i++) {
    if( n % i == 0) {
      count++;
      if (n/i != i) {
        count++;
      }
    } 
  }
  if( count == 2) {
      cout<< "It is a Prime number";
    } else {
      cout<< "It is not a Prime number";
    }
}

void gcd (int n1, int n2) {
  int count = 0;
  while(n1>0 && n2>0) {
    if( n1 > n2) {
      n1 =n1 % n2;
    } else {
      n2 = n2 % n1;
    }
  }
  if (n1 == 0) {
    cout<<n2;
  } else if(n2 == 0) {
    cout<<n1;
  }
}
int main(){
  int n1, n2;
  cin>>n1>>n2;
  cout<<reserveOfNumber(n1);
  // gcd(n1,n2);;
}