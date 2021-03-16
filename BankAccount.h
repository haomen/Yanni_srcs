class BankAccount {
  public:
    BankAccount();
    BankAccount(float b);
    ~BankAccount();
    float getNumber();
    void setName(float b);
    BankAccount operator-() const;
  private:
   float balance;
};
