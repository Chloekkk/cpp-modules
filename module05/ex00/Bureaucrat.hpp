/*
 * File: Bureaucrat.hpp
 * Project: ex00
 * Created Date: 2022/11/11
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <string>

class Bureaucrat {
 private:
  const std::string name_;
  int grade_;
 public:
  Bureaucrat();
  Bureaucrat(const std::string &name, int grade);
  Bureaucrat(const Bureaucrat &copy);
  ~Bureaucrat();

  Bureaucrat &operator=(const Bureaucrat &src);

  const std::string &getName() const;
  int getGrade() const;

  void incrementGrade();
  void decrementGrade();

  class GradeTooHighException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //BUREAUCRAT_HPP_
