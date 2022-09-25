class MyCircularQueue {
public:
    vector<int> ans;
    int x = 0, y = 0, size, ctr = 0;
    
    MyCircularQueue(int k) {
        ans.resize(k);
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        ++ctr;
        ans[y] = value;
        ++y;
        if(y == size)
            y = 0;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        --ctr;        
        x++;
        if(x == size)
            x = 0;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return ans[x];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return ans[(y-1+size)%size];
    }
    
    bool isEmpty() {
        if(ctr == 0)
            return true;
        return false;
    }
    
    bool isFull() {
        if(ctr == size)
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */