class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr_angle = (30 * hour + 0.5 * minutes);
        double min_angle = 6 * minutes;
        double angle = abs(hr_angle - min_angle);
        return min(angle, (360 - angle));
    }
};