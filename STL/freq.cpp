#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    string str;
    getline(cin,str); 
    // declaring map of <string, int> type
	unordered_map<string, int> wordFreq; 
	stringstream ss(str); // Used for breaking words 
	string word; // To store individual words 
	while (ss >> word) 
		wordFreq[word]++; 


	for (auto p = wordFreq.begin(); p != wordFreq.end(); p++) 
		cout<< p->first << " : " << p->second <<"\n";

	return 0; 
} 
