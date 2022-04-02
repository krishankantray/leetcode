class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int p=0, q=people.size()-1;
        int boat=0;
        while(p<=q){
            if(people[p]+people[q]<=limit) p++ ;
            q--;
            boat++;
        }
        return boat;
    }
};