#include <bits/stdc++.h>
using namespace std;

class RideSharingSystem {
public:
    deque<int> riders;
    deque<int> drivers;

    RideSharingSystem() = default;

    void addRider(int riderId) {
        riders.push_back(riderId);
    }

    void addDriver(int driverId) {
        drivers.push_back(driverId);
    }
   vector<int> matchDriverWithRider() {
        if (!drivers.empty() && !riders.empty()) {
            int d = drivers.front();
            int r = riders.front();
            drivers.pop_front();
            riders.pop_front();
            return {d, r};
        }
        return {-1, -1};
    }


    void cancelRider(int riderId) {
        auto it = find(riders.begin(), riders.end(), riderId);
        if (it != riders.end()) riders.erase(it);
    }
};
