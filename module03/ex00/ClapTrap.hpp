/*
 * File: ClapTrap.hpp
 * Project: ex00
 * Created Date: 2022/11/06
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

enum CT_STATUS {
  DEAD,
  NO_EP,
  ALIVE
};

class ClapTrap {
 private:
  std::string name_;
  unsigned int hp_;
  unsigned int ep_;
  unsigned int damage_;

 public:
  ClapTrap(void);
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &copy);

  ClapTrap &operator=(const ClapTrap &src);

  const std::string &getName() const;
  void setName(const std::string &name);
  unsigned int getHp() const;
  void setHp(unsigned int hp);
  unsigned int getEp() const;
  void setEp(unsigned int ep);
  unsigned int getDamage() const;
  void setDamage(unsigned int damage);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void printStatus();
  CT_STATUS checkStatus();

  virtual ~ClapTrap();
};

#endif //CLAPTRAP_HPP
