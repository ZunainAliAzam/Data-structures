#include <iostream>
#include <stack>
using namespace std;

bool isNumber(char s){
    char arr[10];
    for(int  i=0; i < 10; i++){
        arr[i] = char(i) + 48;
    }
    for(int j=0; j < 10; j++){
        if (arr[j] == s){
            return true;
        }
    }
    return false;
}
int opt_val(char opt){
    switch (opt)
    {
    case '+':
        return 2;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 4;
        break;
    case '/':
        return 3;
        break;
    case '^':
        return 5;
        break;
    default:
        return 0;
        break;
    }

}
char get_opt(int val){
    switch (val)
    {
    case 2:
        return '+';
        break;
    case 1:
        return '-';
        break;
    case 4:
        return '*';
        break;
    case 3:
        return '/';
        break;
    case 5:
        return '^';
        break;
    default:
        return ' ';
        break;
    } 
}
int main(){
    string infix, postfix;
    cout<<"infix:";
    cin>>infix;
    stack<int>s;
    for(int i = 0; i<infix.length() ; i++){
        if(isNumber(infix[i])){
            postfix += infix[i];
        }
        else{
            while(true){
                if(s.empty() || (opt_val(infix[i]) > s.top())){
                    s.push(opt_val(infix[i]));
                    break;
                }
                else if(opt_val(infix[i]) <= s.top()){
                    postfix += get_opt(s.top());
                    s.pop();
                }
            }
        }
    }
    while(true){
        if(s.empty()){
            break;
        }
        postfix += get_opt(s.top());
        s.pop();
    }
    cout<<postfix;
    return 0;
}