//https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    cout<<b[0]+a.substr(1,a.size()-1)<<" "<<a[0]+b.substr(1,b.size()-1)<<endl;  
    // or use swap
    // swap(a[0],b[0]);
    // cout<<a<<" "<<b<<endl;
    return 0;
}

