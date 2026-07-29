class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i=0;
        int sum=0;
        while(i<students.size()){
            sum+=abs(seats[i]-students[i]);
            i++;
        }
        return sum;
    }
};