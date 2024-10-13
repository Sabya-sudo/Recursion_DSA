#include<iostream>
#include <string>
 using namespace std;
bool f(int i, string &S){
if(i>=S.size()/2)return true;
if(S[i]!=S[S.size()-i-1])return false;
return f(i+1,S);
}
 
int main(){ 
string s ="madam";
cout << f(0, s);
return 0;
}
