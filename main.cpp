#include <iostream>

class Number {
private:
    int num_;
public:
    Number(int num = 0): num_(num) {}

    Number operator++() { num_++; return *this; }
    Number operator++(int) {
        Number temp(*this);
        temp.num_ += 1;
        return temp;
    }

    Number operator--() { num_--; return *this; }
    Number operator--(int) {
        Number temp(*this);
        temp.num_ -= 1;
        return temp;
    }

    Number operator+(int num) {
        return Number(num_ + num);
    }

    Number operator-(int num) {
        return Number(num_ - num);
    }

    Number operator*(int num) {
        return Number(num_ * num);
    }

    Number operator/(int num) {
        return Number(num_ / num);
    }

    Number operator=(int num) {
        num_ = num;
        return *this;
    }

    Number operator+=(int num) {
        return this->num_ += num;
    }

    Number operator-=(int num) {
        return this->num_ -= num;
    }

    Number operator*=(int num) {
        return this->num_ *= num;
    }

    Number operator/=(int num) {
        return this->num_ /= num;
    }

    bool operator==(int num) {
        return this->num_ == num;
    }

    void printNum() const { std::cout << num_ << std::endl; }
};

int main() {
    Number num1(3);
    num1 = 2;
    
    if(num1 == 2) num1.printNum();
}