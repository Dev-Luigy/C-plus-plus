#include <iostream>
#include <string>
#include <vector>

class Time {
private:
  int hour = 0;
  int minute = 0;
  int second = 0;

public:
  Time(int hour, int minute, int second);
  std::string toString();

  // getters
  int getHour();
  int getMinute();
  int getSecond();

  // setters
  void setHour(int value);
  void setMinutes(int value);
  void setSeconds(int value);

  // generic
  void nextSecond();
};

Time::Time(int hour, int minute, int second){
  setHour(hour);
  setMinutes(minute);
  setSeconds(second);
}

int Time::getHour() { return hour; }
int Time::getMinute() { return minute; }
int Time::getSecond() { return second; }

void Time::setHour(int value) {
  if (value > 24) {
    std::cout <<"fail: hora invalida";
  } else
    hour += value % 24;
}
void Time::setMinutes(int value) {
  if (value > 60) {
    std::cout <<"fail: minuto invalido";
  } else
    minute += value % 60;
}
void Time::setSeconds(int value) {
  if (value > 60) {
    std::cout <<"fail: segundo invalido";
  } else
    second += value % 60;
}

void Time::nextSecond() {
  setSeconds(getSecond() + 1);
  if (!getSecond()) {
    if (getMinute() + 1 == 60) {
      if (getHour() + 1 == 24) {
        setHour(getHour() + 1);
      }
    } else {
      setMinutes(getMinute() + 1);
    }
  }
}
std::string Time::toString() {
  return std::to_string(getHour()) + ":" + std::to_string(getMinute()) + ":" +
         std::to_string(getSecond());
}

bool comparateStrings2Menu(std::string action, std::string actualMenu) {
  return action == actualMenu;
}

int main() {
  Time tempo(0, 0, 0);

  while (true) {
    std::string inputText;
    std::cin >> inputText;

    // vars;
    std::cout << "$" << inputText; // prints with \n
    std::vector<std::string> parts;

    // separate string.
    int lastSpacePos = 0;
    for (unsigned int i = 0; i < inputText.size(); i++) {
      bool lastText = i == inputText.size() - 1;
      bool spaceBetweenWords = inputText[i] == *" ";

      if (spaceBetweenWords || lastText) {
        parts.push_back(inputText.substr(lastSpacePos, i + (lastText)));
        lastSpacePos = i + 1;
      }
    }

    // Menu Acess
    if (comparateStrings2Menu(parts[0], "show")) {
      std::cout << tempo.toString();
    } else if (comparateStrings2Menu(parts[0], "set")) {
      tempo.setHour(std::stoi(parts[1]));
      tempo.setMinutes(std::stoi(parts[2]));
      tempo.setSeconds(std::stoi(parts[3]));
    } else if (comparateStrings2Menu(parts[0], "next")) {
      tempo.nextSecond();
    } else {
      return 0;
    }
  }
}