//Brute Force
//TC : O(n^2) || SC : O(n)
int kDistinctChars(int k, string &str)
{
    int ans = 0;

    for(int i = 0; i < str.length(); i++)
    {
        // Create a set of unique characters
        unordered_set<char> uniqueChars;

        for(int j = i; j < str.length(); j++)
        {
            // Add characters in the set
            uniqueChars.insert(str[j]);

            // If set size is greater than K then we won't consider this substring
            if(uniqueChars.size() > k)
            break;

            // Update the answer
            ans = max(ans, j - i + 1);
        }
    }

    return ans;
}


//Two Pointers Approach
//TC : O(n) || SC : O(1)
int kDistinctChars(int k, string &str)
{
    int left=0,right=0;
    int cnt = 0,maxLen = 0;
    int n = str.size();
    vector<int> freq(26,0);

    while(right < n)
    {
        freq[str[right]-'a']++;

        if(freq[str[right]-'a'] == 1)
        cnt++;

        while(cnt > k)
        {
            freq[str[left]-'a']--;
            if(freq[str[left]-'a'] == 0)
            cnt--;

            left++;
        }

        maxLen = max(maxLen,right-left+1);
        right++;
    }
    return maxLen;
}