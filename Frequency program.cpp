//Write a function that takes a string input and returns the frequency of each character
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	string task;
	map<char, int> freq;
	cout<<"Enter a word:  ";
	cin>> task;
	for(int i = 0; i < task.length(); i++){
		char letter = task[i];
		
		if(freq.find(letter) == freq.end()){
			freq[letter] = 0;
		}
		freq[letter]++;
	}
	for(auto itr = freq.begin(); itr != freq.end(); ++itr){
	    cout<< itr->first<< ":  "<< itr->second<< endl;
	}
}

