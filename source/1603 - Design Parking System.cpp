class ParkingSystem {
private:
    int big, medium, small;
public:
    ParkingSystem(int big, int medium, int small) :
        big(big), medium(medium), small(small) {}
    bool addCar(int carType) {
        if (carType == 1) {
            if (big) {
                big--;
                return true;
            }
            else return false;
        }
        else if (carType == 2) {
            if (medium) {
                medium--;
                return true;
            }
            else return false;
        }
        else {
            if (small) {
                small--;
                return true;
            }
            else return false;
        }
    }
};
