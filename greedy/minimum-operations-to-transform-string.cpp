class Solution {
public:
    int minOperations(string s) {
        int count=0;
        int size=s.size();
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                continue;
            }
            while(i<size-1 && s[i]!=s[i+1]){
                s[i]++;
                count++;
            }
        }
        cout<<count<<endl;
        if(s.back()=='z'){
            count+=1;
            return count;
        }else if(s.back()!='z' && s.back()!='a'){
            count+='z'-s.back();
        }
        return count==0?0:count+1;
    }
};