class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s; //stack to store operands
        string operators = "+-*/";
    for(string& t: tokens){
        //if token is an operator
        if(operators.find(t) != string::npos ){
        int a = s.top();
        s.pop();
        int b= s.top();
        s.pop();
        int result = 0;

        switch(t[0]){ //Determine operation
            case '+': result= b + a; break;
            case '-': result= b - a; break;
            case '*': result= b * a; break;
            case '/': result= b / a; break;
        }
        s.push(result); 
    }
    else{ //if token is an operand
        s.push(stoi(t)); //convert string to int and push to stack
    } 
    }
    return s.top();   //storing final result
    }
    
};