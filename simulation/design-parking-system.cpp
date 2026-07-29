class ParkingSystem {
public:
    vector<int> result;
    ParkingSystem(int big, int medium, int small) {
        result.push_back(big);
        result.push_back(medium);
        result.push_back(small);
    }

    bool addCar(int carType) {
        if (carType == 1) {
            if (result[0] != 0) {
                result[0]--;
                return true;
            }else{
                return false;
            }
        }
        if (carType == 2) {
            if (result[1] != 0) {
                result[1]--;
                return true;
            }else{
                return false;
            }
        }
        if (carType == 3) {
            if (result[2] != 0) {
                result[2]--;
                return true;
            }else{
                return false;
            }
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */