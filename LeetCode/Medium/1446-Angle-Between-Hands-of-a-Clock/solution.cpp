class Solution {
public:
    double angleClock(int hour, int minutes) {
        float HourAngle = (hour%12)*30+minutes*0.5;
        float MinutesAngle = minutes*6;
        
         
     float diff =   abs(HourAngle-MinutesAngle);
     
     return min(diff, 360-diff);
        
            }
};