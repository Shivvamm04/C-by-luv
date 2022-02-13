#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,multiset<string>> stu_list;
    int n;
	cin>> n;
	for(int i=0;i<n;i++){
		int marks;
		string name;
		cin>> name>> marks;
		stu_list[-1*marks].insert(name);
}
    for(auto &pr:stu_list){
        auto &students = pr.second;
        int marks = pr.first;
        for(auto &stu:students){
            std::cout << stu <<" "<< -1*marks << std::endl;
        }
    }
    
}
// i/p
// 3
// bob 70
// eve 99
// alice 70

// o/p-
// eve 99
// alice 70
// bob 70