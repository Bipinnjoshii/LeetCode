class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string str;

        for(int i = 1 ; i <= n ; i++){
            if(command[i-1] == 'G'){
                str+='G';
            }
            else if(command[i-1] == '(' && command[i] == ')'){
                str+='o';
                i++;
            }
            else{
                str+='a';
                str+='l';
                i+=3;
            }
        }
        return str;
    }
};