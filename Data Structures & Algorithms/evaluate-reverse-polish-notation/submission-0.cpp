class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n =tokens.size();
        stack<char> stack;
        for(int i=0;i<n;i++){
            if (tokens[i] == "+") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b + a);
            } else if (tokens[i] == "-") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b - a);
            } else if (tokens[i] == "*") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b * a);
            } else if (tokens[i] == "/") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b / a);
            } else {
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();

    }
};
