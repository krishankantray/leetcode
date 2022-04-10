class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>stk;
        for(int i=0; i<ops.size();  i++){
            if(ops[i]=="+"){
                int v1 = stk.top();
                stk.pop();
                int v2=stk.top();
                stk.push(v1);
                stk.push(v1+v2);
            }
            else if(ops[i]=="D"){
                stk.push((stk.top())*2);
            }
            else if(ops[i]=="C") stk.pop();
            else stk.push(stoi(ops[i]));
        }
        int score=0;
        while(!stk.empty()){
            score+=stk.top();
            stk.pop();
        }
        return score;
    }
};