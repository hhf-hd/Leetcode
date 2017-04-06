#include<iostream>
#include<stack>
#include<string>
class Solution {
public:
    bool isValid(string s) {
        std::stack <char> CharStack;
        CharStack.push('s');
        cout<<CharStack.top();
        
        return 0;
    }
};

int main()

{
	Solution S;
	std::string string("hasn");
	S.isValid(string);
	return 0;
}
