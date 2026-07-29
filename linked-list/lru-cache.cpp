class LRUCache {
public:
    list<int> dll;
    unordered_map<int, pair<list<int>::iterator, int>> mp;
    int n;
    LRUCache(int capacity) { 
        n = capacity; 
    }
    void updatePos(int key) {
        dll.erase(mp[key].first); 
        dll.push_front(key);
        mp[key].first = dll.begin(); // becoz of address we push to front of dll
    }
    int get(int key) {
        // if key is not present
        if (mp.find(key) == mp.end())
            return -1;
        // if present
        updatePos(key); // then we return value of that key and now it is recently used so erase that key from that position and update or push to front becoz by dll.begin() we address so for assining the address
        return mp[key].second;
    }

    void put(int key, int value) {
        // if key is found
        if (mp.find(key) != mp.end()) {
            mp[key].second = value; // then update the value and also it is recently used so update position
            updatePos(key);
        } else {
            dll.push_front(key);
            mp[key] = {dll.begin(), value};
            n--;
        }
        if (n < 0) {
            int key_to_del = dll.back();
            mp.erase(key_to_del);
            dll.pop_back();
            n++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */