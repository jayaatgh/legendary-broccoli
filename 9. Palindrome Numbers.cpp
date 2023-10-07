//Method-2

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int N = s.size();
        for(int i = 0; i < N; i++){
            if(s[i] != s[N-1-i]) return false;
        }
        return true; 
    }
};

//Method-1

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        vector<int> v;
        while (x > 0)
        {
            int digit = x%10;
            x /= 10;
            v.push_back(digit);
        }

        int n = v.size();
        for(int i=0,j=n-1;i<=j;){
            if(v[i]==v[j])
                {i++;j--;}
            else
                {return false;}
        } 
        return true;   
    }
};
