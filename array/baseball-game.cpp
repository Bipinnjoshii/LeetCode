class Solution {
public:
    int calPoints(vector<string>& o) {
        int n = o.size();

        vector<int>temp;

        for(int i = 0 ; i < n ; i++){
            if(o[i] == "C" && !temp.empty()){
                temp.pop_back();
            }
            else if(o[i] != "C" && o[i] != "+" && o[i] != "D"){
                temp.push_back(stoi(o[i]));
            }
            else if(o[i] == "+" && temp.size() >= 2){
                int n = temp.size();

                temp.push_back(temp[n-1] + temp[n-2]);
            }
            else if(o[i] == "D" && !temp.empty()){
                temp.push_back(temp.back() * 2);
            }

        }

        int sum = 0;

        for(int i = 0 ; i < temp.size() ; i++){
            sum += temp[i];
        }

        return sum;
    }
};