// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

const int NUM = 31; 
 
void positions(string str, int n) 
{ int res=0;
	int k=n;
	for (int i = 0; i < n-1; i++) { 
		 res=res+(str[i] & NUM)*(pow(26,k-1));  
		 k--;
	} 
}  
int main() 
{ 
	string str = "BCAA"; 
	int n = str.length(); 

	positions(str, n); 

	return 0; 
} 
