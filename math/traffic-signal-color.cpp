class Solution {
public:
    string trafficSignal(int timer) {
        string st = "Invalid";
        if(timer == 0){
            st = "Green";
        }
        else if(timer>30 & timer <= 90){
            st = "Red";
        }
        else if(timer == 30){
            st = "Orange";
        }
        return st;
    }
};