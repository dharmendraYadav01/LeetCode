class ProductOfNumbers {
public:
    vector<int>result;
    ProductOfNumbers() {
        result={1};
    }

    void add(int num) {
        result.push_back(num);
    }
    
    int getProduct(int k) {
        
        int product=1;
        int size=result.size();
        for(int i=size-1;i>=size-k;i--){
            product*=result[i];
        }
        return product;

    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */