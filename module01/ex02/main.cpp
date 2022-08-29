/*
 * File: main.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <string>
#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Address of str: " << &str << std::endl
            << "Address of stringPTR: " << &stringPTR << std::endl
            << "Address of stringREF: " << &stringREF << std::endl;

  std::cout << "Value of str: " << str << std::endl
            << "Value of stringPTR: " << stringPTR << std::endl
            << "Value of stringREF: " << stringREF << std::endl;
}