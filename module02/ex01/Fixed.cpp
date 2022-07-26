/*
 * File: Fixed.cpp
 * Project: cpp_modules
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Constructor
Fixed::Fixed() : num_(0) {
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int num) : num_(num << fBits_) {
  std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float num) : num_((int) roundf(num * (1 << fBits_))) {
  std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy) {
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

// Operator
Fixed &Fixed::operator=(const Fixed &src) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->num_ = src.getRawBits();
  return (*this);
}

// Getter & Setter
int Fixed::getRawBits(void) const {
  return this->num_;
}
void Fixed::setRawBits(const int raw) {
  this->num_ = raw;
}

// Methods
float Fixed::toFloat(void) const {
  return ((float) num_ / (1 << fBits_));
}
int Fixed::toInt(void) const {
  return (num_ >> fBits_);
}

// Destructor
Fixed::~Fixed() {
  std::cout << "Destructor called " << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Fixed &src) {
  os << src.toFloat();
  return os;
}
