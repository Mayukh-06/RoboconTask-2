#include <iostream>
using namespace std;

const int numSensors = 8;


void readSensors(int sensors[]) {
    cout << "Enter 8 sensor values (0 = White, 1 = Black): ";

    for (int i = 0; i < numSensors; i++) {
        cin >> sensors[i];
    }
}

double calculateLinePosition(int sensors[]) {
    int weightedSum = 0;
    int count = 0;

    for (int i = 0; i < numSensors; i++) {
        if (sensors[i] == 1) {
            weightedSum += i;
            count++;
        }
    }

    if (count == 0) {
        return -1;
    }

    return (double)weightedSum / count;
}

void decideMovement(double position) {
    if (position == -1) {
        cout << "Line Position: Lost" << endl;
        cout << "Action: Line Lost" << endl;
    }
    else if (position < 2.5) {
        cout << "Line Position: Left" << endl;
        cout << "Action: Turn Left" << endl;
    }
    else if (position <= 4.5) {
        cout << "Line Position: Center" << endl;
        cout << "Action: Move Forward" << endl;
    }
    else {
        cout << "Line Position: Right" << endl;
        cout << "Action: Turn Right" << endl;
    }
}

int main() {
    int sensors[numSensors];

    readSensors(sensors);

    double position = calculateLinePosition(sensors);

    decideMovement(position);

    return 0;
}