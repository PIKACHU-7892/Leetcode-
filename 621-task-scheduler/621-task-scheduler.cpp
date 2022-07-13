class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> counts ;
        int character = 'A';
       
        for(int i = 0;i<26;i++)
        {
            int count = 0;
            for(int j = 0 ; j<tasks.size();j++)
            {
                
                if(tasks[j]==character + i)
                {
                    count++;
                }
            }
            if(count!=0)
            {counts.push_back(count);
                
            }
            


        }
        int time = 0 ;
        make_heap(counts.begin(),counts.end());
        int heap_size = counts.size();
        queue<pair<int,int>> b;
        while(heap_size!=0 || b.size()!=0)
        {
            time++;
            if(heap_size!=0)
            {
                int k = counts.front();
                
                pop_heap(counts.begin(),counts.end());
                counts.pop_back();
                
                heap_size--;
                if(k>1)
                {
                    b.push({k-1,time + n });
                }
                }
            if(b.size()>0)
            {
                 pair<int,int> l = b.front();
               
                if(l.second == time)
                {
                    b.pop();
                    counts.push_back(l.first);
                push_heap(counts.begin(),counts.end());
                    heap_size++;
                    
                }
            }
          

        }
        return time ;
    }
};