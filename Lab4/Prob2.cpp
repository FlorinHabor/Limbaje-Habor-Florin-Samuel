#include <iostream>
#include <vector>

using namespace std;

enum ParkingSpotState { FREE, OCCUPIED };

class ParkingLot {
private:
    vector<ParkingSpotState> spots;

public:
    ParkingLot(int numSpots) {
        spots.resize(numSpots, FREE);
    }

    void parkCar(int spotNumber) {
        if (spotNumber < 1 || spotNumber > spots.size()) {
            cout << "Spot number is invalid!" << endl;
            return;
        }

        if (spots[spotNumber - 1] == OCCUPIED) {
            cout << "Spot " << spotNumber << " is already occupied!" << endl;
        }
        else {
            spots[spotNumber - 1] = OCCUPIED;
            cout << "Car parked at spot " << spotNumber << endl;
        }
    }

    void leaveSpot(int spotNumber) {
        if (spotNumber < 1 || spotNumber > spots.size()) {
            cout << "Spot number is invalid!" << endl;
            return;
        }

        if (spots[spotNumber - 1] == FREE) {
            cout << "Spot " << spotNumber << " is already free!" << endl;
        }
        else {
            spots[spotNumber - 1] = FREE;
            cout << "Car left spot " << spotNumber << endl;
        }
    }

    void printParkingStatus() {
        cout << "Parking Lot Status:" << endl;
        for (size_t i = 0; i < spots.size(); ++i) {
            cout << "Spot " << i + 1 << ": " << (spots[i] == FREE ? "Free" : "Occupied") << endl;
        }
    }
};

int main() {
    int spots;
    cout << "Number of parking spots:"; 
    cin >> spots;
    ParkingLot parkingLot(spots);
    cout << "0 - Check parking spot;"<< endl <<"1-10 - Pick parking spot;"<< endl <<"(-1)-(-10) - Leave parking spot;"<<endl;
    int input = 0;
    while (input != 404) {
        cin >> input;
        if (input == 0) {
            parkingLot.printParkingStatus();
        }
        else if (input < 0) {
            parkingLot.leaveSpot(abs(input));
        }
        else {
            parkingLot.parkCar(input);
        }
    }

    return 0;
}
