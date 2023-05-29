class ParkingSystem {
public:
    map<int,int> m;
    ParkingSystem(int big, int medium, int small) {
      m[3]=small;
      m[2]=medium;
      m[1]=big; 
    }  
    bool addCar(int carType){
      if(m[carType]>0){
            m[carType]--;
            return true;
        }
        return false;          
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */