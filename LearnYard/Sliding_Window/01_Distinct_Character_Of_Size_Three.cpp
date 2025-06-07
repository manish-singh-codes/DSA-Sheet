
// <<<<<<<<<<<<<<<<<<=============================== Approach ========================================>>>>>>>>>>>>>>>>>>

// 1) Basically two pointer start, right ka use le rahe hain window size ke like.
// 2) pehle calculation hogi.
// 3) Fir jab tak window size hit nahi hogi tab tak window size banate rahenge.
// 4) Aur jab window size achieve ho jaaye tab calculation me se ans nikalenge, and then start and end ++ kar denge.


    int countGoodSubstrings(string s) {
        int left = 0;
        int right = 0;
        int count = 0;
        unordered_map<char, int> st;
        while (right < s.size()) {
            st[s[right]]++;
            if ((right - left) + 1 < 3) {
                right++;
            } else if ((right - left) + 1 == 3) {
                if (st.size() == 3)
                    count++;
                st[s[left]]--;
                if (st[s[left]] == 0) {
                    st.erase(s[left]);
                }

                left++;
                right++;
            }
        }
        return count;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
