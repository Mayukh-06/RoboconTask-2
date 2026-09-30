
#include <iostream>
#include <string>
using namespace std;

class Robot {
  private:
    int speed;
    int battery;

  public:
    void setSpeed(int s) {
      if (s >= 0 && s <= 100) {
        speed = s;
      } else {
        cout << "Invalid speed! Speed must be between 0 and 100.\n";
      }
    }

    void setBattery(int b) {
      if (b >= 0 && b <= 100) {
        battery = b;
      } else {
        cout << "Invalid battery! Battery must be between 0 and 100.\n";
      }
    }

    void moveForward() {
      if (battery >= 5) {
        cout << "Moving Forward\n";
        battery -= 5;
      } else {
        cout << "Robot cannot move. Battery is too low.\n";
      }
    }

    void moveBackward() {
      if (battery >= 5) {
        cout << "Moving Backward\n";
        battery -= 5;
      } else {
        cout << "Robot cannot move. Battery is too low.\n";
      }
    }

    void turnLeft() {
      if (battery >= 5) {
        cout << "Turning Left\n";
        battery -= 5;
      } else {
        cout << "Robot cannot move. Battery is too low.\n";
      }
    }

    void turnRight() {
      if (battery >= 5) {
        cout << "Turning Right\n";
        battery -= 5;
      } else {
        cout << "Robot cannot move. Battery is too low.\n";
      }
    }

    void displayStatus() {
      cout << "Robot Speed: " << speed << endl;
      cout << "Battery: " << battery << "%" << endl;
    }
};

int main() {
  Robot robot;

  int speed, battery;
  int n;
  string command;

  cout << "Enter Speed: ";
  cin >> speed;

  cout << "Enter Battery: ";
  cin >> battery;

  robot.setSpeed(speed);
  robot.setBattery(battery);

  cout << "Enter Commands {Forward, Backward, Left, Right} :\n";

  for (int i = 0; i < 4; i++) {
    cin >> command;

    if (command == "Forward") {
      robot.moveForward();
    }
    else if (command == "Backward") {
      robot.moveBackward();
    }
    else if (command == "Left") {
      robot.turnLeft();
    }
    else if (command == "Right") {
      robot.turnRight();
    }
    else {
      cout << "Invalid command\n";
      break;
    }
  }

  robot.displayStatus();

  return 0;
}

    