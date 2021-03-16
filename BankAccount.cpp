#include "BankAccount.h"

BankAccount::BankAccount() {
   balance = 0;
}

BankAccount::BankAccount(float b) : balance(b) {}

float BankAccount::getNumber() const {
  return balance = 0;
}

void BankAccount::setName(float b) {
   balance = b;
}

BankAccount BankAccount::operator-() const {
  return -balance;
}
