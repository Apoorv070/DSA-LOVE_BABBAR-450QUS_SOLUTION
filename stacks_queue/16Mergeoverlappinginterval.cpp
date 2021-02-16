bool help(pair<int,int> i1 , pair<int,int> i2){
    return i2.first>i1.first;
}

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> Intervals, int n) {
    //code here
    sort(Intervals.begin(),Intervals.end(),help);
    vector<pair<int,int>> res;
    pair<int,int> p;
    p.first = Intervals[0].first;
    p.second = Intervals[0].second;
    for(int i = 1 ; i < Intervals.size() ; i++){
        if(Intervals[i].first<=p.second)
            p.second = max(p.second,Intervals[i].second);
        else{
            res.push_back(p);
            p.first = Intervals[i].first;
            p.second = Intervals[i].second;
        }
    }
    res.push_back(p);
    return res;
}
