#include <iomanip> // necessário para std::setw()
#include <iostream>
#include <list>
#include <sstream> // necessário para std::stringstream
#include <string>
#include <vector>

using namespace std;

class Slot {
private:
  string name;
  float price;
  int quantity;

public:
  Slot(string name, float price, int quantity);
  string getName();
  float getPrice();
  int getQuantity();
  void setName(string name);
  void setPrice(float price);
  void setQuantity(int quantity);
  string toString();
};

class VendingMachine {
private:
  list<Slot> slots;
  float profit = 0;
  float cash = 0;
  int capacity;

public:
  VendingMachine(int capacity);
  Slot getSlot(int index);
  void setSlot(int index, Slot slot);
  void clearSlot(int index);

  void insertCash(float cash);
  float withdrawCash();
  float getCash();
  float getProfit();

  void buyItem(int index);

  string toString();
};

int main() {
  VendingMachine *maquina = new VendingMachine(0);
  string inputText;

  while (1) {

    // vars;
    getline(cin, inputText);
    cout << "$" << inputText << endl;
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
    if (parts[0] == "init") {
      maquina = new VendingMachine(stoi(parts[1]));
      for (int i = 0; i < stoi(parts[1]); i++) {
        Slot slot1 = *new Slot("empty", 0, 0);
        maquina->setSlot(i, slot1);
        cout << maquina->getSlot(i).toString();
      }
    } else if (parts[0] == "show") {
      cout << maquina->toString();
    } else if (parts[0] == "set") {
      maquina->setSlot(stoi(parts[1]),
                       *new Slot(parts[2], stoi(parts[3]), stof(parts[4])));
    } else if (parts[0] == "limpar") {
      maquina->clearSlot(stoi(parts[1]));
    } else if (parts[0] == "dinheiro") {
      maquina->insertCash(stof(parts[1]));
    } else if (parts[0] == "troco") {
      std::stringstream ss;
      ss << "voce recebeu " << maquina->withdrawCash() << " RS";
    } else if (parts[0] == "comprar") {
      maquina->buyItem(stoi(parts[1]));
    } else {
        break;
    }
  }
}

// Slots methods

Slot::Slot(string name, float price, int quantity) {
  this->name = name;
  this->price = price;
  this->quantity = quantity;
}
string Slot::getName() { return this->name; }
float Slot::getPrice() { return this->price; }
int Slot::getQuantity() { return this->quantity; }
void Slot::setName(string name) { this->name = name; }
void Slot::setPrice(float price) { this->price = price; }
void Slot::setQuantity(int quantity) {
  if (this->quantity - 1 < 0) {
    // msg de erro.
    return;
  }
  this->quantity = quantity;
}
std::string Slot::toString() {
  std::stringstream ss;
  cout << "a";
  ss << "[" << std::setw(7) << this->getName() << " : " << std::setw(2)
     << this->getQuantity() << " U : " << std::setw(5) << std::fixed
     << std::setprecision(2) << this->getPrice() << " RS]";
  return ss.str();
}

// VendingMachine Methods
VendingMachine::VendingMachine(int capacity) {
  this->capacity = capacity;
  slots.resize(capacity, Slot("empty", 0, 0));
};


Slot VendingMachine::getSlot(int index) {
  auto i = slots.begin();
  advance(i, index);
  return *i;
}
void VendingMachine::setSlot(int index, Slot slot) {
  Slot value = VendingMachine::getSlot(index);
  value = slot;
}

void VendingMachine::clearSlot(int index) {
  Slot value = VendingMachine::getSlot(index);
  value = Slot("empty", 0, 0);
}

void VendingMachine::insertCash(float cash) { this->cash += cash; }
float VendingMachine::withdrawCash() {
  float value = getCash();
  cash = 0;
  return value;
}
float VendingMachine::getCash() { return cash; }
float VendingMachine::getProfit() { return profit; }

void VendingMachine::buyItem(int index) {
  std::stringstream ss;
  auto i = slots.begin();
  advance(i, index);
  ss << "voce comprou um " << i->getName();
  i->setQuantity(i->getQuantity() - 1);
  cout << ss.str();
}

std::string VendingMachine::toString() {
  std::stringstream ss;
  int id = 0;
  for (auto i : slots) {
    ss << to_string(id++) << " " << i.toString() << endl;
  }
  return ss.str();
}