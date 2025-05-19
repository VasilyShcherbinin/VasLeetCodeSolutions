#include <iostream>
#include <string>
#include <stack>
#include <unordered_set>

unordered_set<char> openingBrackets = { '(', '[', '{' };
unordered_set<char> closingBrackets = { ')', ']', '}' };

class Solution 
{
    public:
    bool isValid(string s) 
    {
        stack<char> parenthesis;
        for (char c : s)
        {
            if (openingBrackets.count(c))
            {
                parenthesis.push(c);
            }
            else if (closingBrackets.count(c))
            {
                /* No opening brackets */
                if (parenthesis.empty())
                {
                    return false;
                }
                else
                {
                    char ch = parenthesis.top();
                    if (ch == '(' && c == ')' ||
                        ch == '[' && c == ']' ||
                        ch == '{' && c == '}')
                    {
                        parenthesis.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                
            }
        }
        return parenthesis.empty() ? true : false;
    }
};