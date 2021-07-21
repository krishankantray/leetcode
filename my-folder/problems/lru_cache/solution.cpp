class LRUCache {
private:
    list<int>lru;
    map<int,pair<int, list<int>::iterator > > cache ;
    int capacity ; 
public:
    LRUCache(int given_capacity) : capacity(given_capacity) {}
    
    int get(int key) {
        if(cache.find(key) == cache.end()) { 
            return -1 ;
        }
        int val = cache[key].first ;
        lru.erase(cache[key].second) ;
        lru.push_front(key);
        cache[key].second = lru.begin() ; 
        return val ; 
    }
    
    void put(int key, int value) {
        if(cache.find(key)==cache.end()){
            if(cache.size()==capacity){
                int bk = lru.back() ; 
                lru.pop_back() ;
                cache.erase(bk);
                lru.push_front(key);
                cache[key] = { value, lru.begin() } ;
            }
            else{
                lru.push_front(key);
                cache[key] = { value, lru.begin() } ;
            }
        }
        else{
            lru.erase(cache[key].second) ; 
            lru.push_front(key) ; 
            cache[key]={value, lru.begin()} ; 
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */