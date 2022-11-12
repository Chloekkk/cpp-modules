/*
 * File: PresidentialPardonForm.cpp
 * Project: ex02
 * Created Date: 2022/11/12
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "PresidentialPardonForm.hpp"

#include "Form.hpp"

// Constructor & Destructor
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
  std::cout << "Default Constructor of PresidentialPardonForm called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5) {
  this->target_ = target;
  std::cout << "Constructor of PresidentialPardonForm(target) called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("PresidentialPardonForm",
                                                                                          25,
                                                                                          5) {
  this->target_ = copy.target_;
  std::cout << "Copy Constructor of PresidentialPardonForm called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "Destructor of PresidentialPardonForm called" << std::endl;
}

// Operator Overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
  this->target_ = src.target_;
  return (*this);
}

// Method
void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  Form::execute(executor);
  std::cout << target_ << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
