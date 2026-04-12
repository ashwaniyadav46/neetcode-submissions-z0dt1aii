class MyHashSet {
private:
    // A prime number of buckets reduces the chance of keys clustering together
    int numBuckets = 1009; 
    vector<list<int>> buckets;

    // Helper function to map a large key to a small bucket index
    int hash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() {
        // Initialize the vector with 1009 empty linked lists
        buckets.resize(numBuckets);
    }
    
    void add(int key) {
        int i = hash(key);
        // .begin() and .end() provide iterators to traverse the specific bucket
        auto it = find(buckets[i].begin(), buckets[i].end(), key);
        
        // If the key is not found (iterator reached the end), add it
        if (it == buckets[i].end()) {
            buckets[i].push_back(key);
        }
    }
    
    void remove(int key) {
        int i = hash(key);
        // list.remove(key) searches the list and deletes the element if it exists
        buckets[i].remove(key);
    }
    
    bool contains(int key) {
        int i = hash(key);
        // Search only the specific bucket for the key
        auto it = find(buckets[i].begin(), buckets[i].end(), key);
        return it != buckets[i].end();
    }
};