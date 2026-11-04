class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int pos_size = position.size();
        vector<pair<int, int>> pair;

        for(int i = 0; i < pos_size; i++){
            pair.push_back({position[i], speed[i]});
        }
        sort(pair.rbegin(), pair.rend());

        int fleets = 1;
        double prevTime = (double)(target - pair[0].first) / pair[0].second;
        for(int i = 1; i< pos_size; i++){
            double currTime = (double)(target - pair[i].first) / pair[i].second;
            if (currTime > prevTime) {
                fleets++;
                prevTime = currTime;
            }

        }
        return fleets;
    }
};
