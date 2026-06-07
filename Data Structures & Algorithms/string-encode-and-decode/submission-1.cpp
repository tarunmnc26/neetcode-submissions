class Solution {
public:

    string encode(vector<string>& strs) {
        cout<<strs.size();
        string s="";
        for(const string&str:strs){
            int l=str.length();
            s+=to_string(l)+'@'+str;
        }
        return s;

    }

    vector<string> decode(string s) {
        int n=s.length();
        vector<string> ans;
        int i=0;
        while(i<n){
            int len;
            string l="";
            while(s[i]!='@'){
                l+=s[i];
                i++;
            }
            i++;
            len=stoi(l);
            string temp="";
            for(int j=0;j<len;++j){
                temp+=s[i];
                i++;
            }

            ans.push_back(temp);

        }
        return ans;
    }
};
