bool isPossible(vector<int> &boards,int n,int k, int mid){
    int painterCount = 1;
    int boardsum = 0;
    for(int i=0; i<n; i++){
        if(boardsum+boards[i] <= mid){
            boardsum+=boards[i];
        }
        else{
            painterCount++;
            if(painterCount>k || boardsum>mid){
                return false;
            }
            boardsum = boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s = *max_element(boards.begin(),boards.end());
    int sum = 0;
    
    int n = boards.size();
    if(n<k){
        return -1;
    }
    int ans = -1;
    for(int i=0; i<n; i++){
        sum += boards[i];
    }
    int e = sum;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(boards,n,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}