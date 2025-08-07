#include <iostream>
#include <stack>
#include <string>
using namespace std;


int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(const string &infix) {
    stack<char> st;
    string postfix = "";

    for(char ch : infix) {
        if(isalnum(ch)) {
            postfix += ch;
        }
       else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            } 
        }
        // Operator
        else {
            while(!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}


string infixToPrefix(const string &postfix) {
    string prefix = "";
    for(int i = postfix.length() - 1; i >= 0; i--) {
        prefix += postfix[i];
    }
    return prefix;
}

int evaluatePostfix(const string &postfix) {
    stack<int> st;
    
    for(char ch : postfix) {
        if(isdigit(ch)) {
            st.push(ch - '0');
        }
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            
            switch(ch) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }
    return st.top();
}

int main() {
    string infix = "3+2*4";
    string postfix = infixToPostfix(infix);
    string prefix = infixToPrefix(postfix);
    int evaluation = evaluatePostfix(postfix);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    cout << "Prefix: " << prefix << endl;
    cout << "Evaluation: " << evaluation << endl;
    return 0;
}
