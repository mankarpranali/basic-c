#include <iostream>
using namespace std;

void printPattern(int n){
  for( int i=0; i<n; i++) {
    int star1 = 4;
    // if ( i >= n) {
    //   star1 = 2*n-i-1;
    // } else {
    //   star1 = i+1;
    // }
    for( int j=0; j<star1; j++) {
      // if ( i%2 == 0) {
        cout<<"*";
      // } else {
      //   cout<<"_";
      // }
    }
    // int star2 = 2*n-2*i;
    // if ( i >= n) {
    //   star2 = 2*i-2*n+2;
    // } else {
    //   star2 = 2*n-2*i-2;
    // }
    // for( int j=0; j<star2; j++) {
    //   cout<<" ";
    // }
    // int star3 = 0;;
    // if ( i >= n) {
    //   star3 = 2*n-i-1;
    // } else {
    //   star3 = i+1;
    // }
    // for( int j=0; j<star3; j++) {
    //   cout<<"*";
    // }
    cout<<endl;
  }
  // for( int i=0; i<n-1; i++) {
  //   for( int j=0; j<n-i-1; j++) {
  //     cout<<"*";
  //   }
  //   // for( int j=0; j<2*n-2*i-1; j++) {
  //   //   cout<<"*";
  //   // }
  //   cout<<endl;
  // }
}
void printPattern1(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<n; j++) {
        cout<<"*";
    }
    cout<<endl;
  }
}
void printPattern2(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<=i; j++) {
        cout<<"*";
    }
    cout<<endl;
  }
}
void printPattern3(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<=i; j++) {
        cout<<j+1;
    }
    cout<<endl;
  }
}
void printPattern4(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<=i; j++) {
        cout<<i+1;
    }
    cout<<endl;
  }
}
void printPattern5(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<n-i; j++) {
        cout<<"*";
    }
    cout<<endl;
  }
}
void printPattern6(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<n-i; j++) {
        cout<<j+1;
    }
    cout<<endl;
  }
}
void printPattern7(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<n-i-1; j++) {
        cout<<" ";
    }
    for( int j=0; j<2*i+1; j++) {
        cout<<"*";
    }
    for( int j=0; j<n-i-1; j++) {
        cout<<" ";
    }
    cout<<endl;
  }
}
void printPattern8(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<i; j++) {
        cout<<" ";
    }
    for( int j=0; j<2*n-2*i-1; j++) {
        cout<<"*";
    }
    for( int j=0; j<i; j++) {
        cout<<" ";
    }
    cout<<endl;
  }
}
void printPattern9(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<n-i-1; j++) {
        cout<<" ";
    }
    for( int j=0; j<2*i+1; j++) {
        cout<<"*";
    }
    for( int j=0; j<n-i-1; j++) {
        cout<<" ";
    }
    cout<<endl;
  }
  for( int i=0; i<n; i++) {
    for( int j=0; j<i; j++) {
        cout<<" ";
    }
    for( int j=0; j<2*n-2*i-1; j++) {
        cout<<"*";
    }
    for( int j=0; j<i; j++) {
        cout<<" ";
    }
    cout<<endl;
  }
}
void printPattern10(int n){
  for( int i=0; i<2*n-1; i++) {
    int star = i; 
    if(i>n-1) {
      star = 2*n-i-2;
    } else {
      star = i;
    }
    for( int j=0; j<=star; j++) {
        cout<<"*";
    }
    cout<<endl;
  }
}
void printPattern11(int n){
  for( int i=0; i<n; i++) {
    int star = 1; 
    if(i%2 == 0) {
      star = 1;
    } else {
      star = 0;
    }
    for( int j=0; j<=i; j++) {
        cout<<star;
        star = 1-star;
    }
    cout<<endl;
  }
}
void printPattern12(int n){
  for( int i=0; i<n; i++) {
    for( int j=1; j<=i+1; j++) {
        cout<<j;
    }
    for( int j=1; j<=n-2*i+2; j++) {
        cout<<" ";
    }
    for( int j=0; j<=i; j++) {
        cout<<n-3-j+i;
    }
    cout<<endl;
  }
}
void printPattern13(int n){
  int star = 1;
  for( int i=0; i<n; i++) {
    for( int j=0; j<=i; j++) {
        cout<<star<<" ";
        star = star+1;
    }
    cout<<endl;
  }
}
void printPattern14(int n){
  for( int i=0; i<n; i++) {
  char star = 'A';
    for( int j=0; j<=i; j++) {
        cout<<star<<" ";
        star = star+1;
    }
    cout<<endl;
  }
}
void printPattern15(int n){
  for( int i=0; i<n; i++) {
  char star = 'A';
    for( int j=0; j<n-i; j++) {
        cout<<star<<" ";
        star = star+1;
    }
    cout<<endl;
  }
}
void printPattern16(int n){
  char star = 'A';
  for( int i=0; i<n; i++) {
    for( int j=0; j<=i; j++) {
        cout<<star<<" ";
    }
    star = star+1;
    cout<<endl;
  }
}
void printPattern17(int n){
  for( int i=0; i<n; i++) {
    for( int j=0; j<n-i-1; j++) {
        cout<<" ";
    }
    char star = 'A';
    for( int j=0; j<2*i+1; j++) {
        cout<<star;
        if(i<=j){
          star = star-1;
        } else {
          star = star+1;
        }
    }
    for( int j=0; j<n-i-1; j++) {
        cout<<" ";
    }
    cout<<endl;
  }
}
void printPattern18(int n){
  for( int i=0; i<n; i++) {
    char star = 'E'-i;
    for( int j=0; j<=i; j++) {
      cout<<star;
      star = star+1;
    }
    cout<<endl;
  }
}
void printPattern19(int n){
  for( int i=0; i<2*n-1; i++) {
    int star1 = n-i;
    if(i>=n) {
      star1 = i-n+1;
    } else {
      star1 = n-i-1;
    }
    for( int j=0; j<=star1; j++) {
      cout<<"*";
    }
    int star2 = 2*i-1;
    if(i>=n) {
      star2 = 3*n-2*i;
    } else {
      star2 = 2*i-1;
    }
    for( int j=0; j<=star2; j++) {
      cout<<" ";
    }
    int star3 = n-i;
    if(i>=n) {
      star3 = i-n+1;
    } else {
      star3 = n-i-1;
    }
    for( int j=0; j<=star3; j++) {
      cout<<"*";
    }
    cout<<endl;
  }
}
void printPattern20(int n){
  for( int i=0; i<2*n-1; i++) {
    int star1 = i;
    if(i>=n) {
      star1 = 2*n-i-2;
    } else {
      star1 = i;
    }
    for( int j=0; j<=star1; j++) {
      cout<<"*";
    }
    int star2 = 2*n-2*i-3;
    if(i>=n) {
      star2 = 2*i-2*n+1;
    } else {
      star2 = 2*n-2*i-3;
    }
    for( int j=0; j<=star2; j++) {
      cout<<" ";
    }
    int star3 = i;
    if(i>=n) {
      star3 = 2*n-i-2;
    } else {
      star3 = i;
    }
    for( int j=0; j<=star3; j++) {
      cout<<"*";
    }
    cout<<endl;
  }
}
void printPattern21(int n){
  //square
  for( int i=0; i<n; i++) {
    char star1 = '*';
    for( int j=0; j<n; j++) { 
      if(i == 0 || j == 0 || i == n-1 || j == n-1) {
        star1 = '*';
      } else {
        star1 = ' ';
      }
      cout<<star1;
    }
    cout<<endl;
  }
}
void printPattern22(int n){
  for( int i=0; i<2*n-1; i++) {
    for( int j=0; j<2*n-1; j++) {
      int top = i;
      int left = j;
      int right = 2*n-2-j;
      int bottom = 2*n-2-i;
      cout<<n-min(min(top, bottom),min(left,right))<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  printPattern22(n);
}