class ExamTracker {
public:
    map<int,long long>prefix;
    long long total=0;
    ExamTracker() {
        
    }
    
    void record(int time, int score) {
        total+=score;
        prefix[time]=total;
    }
    
    long long totalScore(int startTime, int endTime) {
        if(prefix.empty()) return 0;
        auto itend=prefix.upper_bound(endTime);
        if(itend==prefix.begin()) return 0;
        --itend;
        long long sumend=itend->second;
        
        auto itstart=prefix.lower_bound(startTime);
        long long sumstart=0;
        if(itstart!=prefix.begin()){
            --itstart;
            sumstart=itstart->second;
        } 
        return sumend-sumstart;
        // long long sum=0;
        // int time=p.first;
        // int score=p.second;
        // if(time>=startTime && time<=endTime){
        //     sum+=score;
        // }
        // return sum;
    }
};

/**
 * Your ExamTracker object will be instantiated and called as such:
 * ExamTracker* obj = new ExamTracker();
 * obj->record(time,score);
 * long long param_2 = obj->totalScore(startTime,endTime);
 */