class Solution {
public:
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,7));
        int day=stoi(date.substr(8,10));
        string year1="";
        string month1="";
        string day1="";
        string ans="";
        while(year>0){
            year1=char((year%2)+'0')+year1;
            year/=2;
        }
        while(month>0){
            month1=char((month%2)+'0')+month1;
            month/=2;
        }
        while(day>0){
            day1=char((day%2)+'0')+day1;
            day/=2;
        }
        ans=year1+'-'+month1+'-'+day1;

        return ans;
    }
};