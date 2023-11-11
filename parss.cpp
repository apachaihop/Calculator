#include "parss.h"

void Pars::parsing(QString str) {
  for (int i = 0; i < str.length(); i++) {
    if ((i == 0 || str[i - 1].unicode() == 40) && str[i].unicode() == 45) {
      QString buf;
      buf += str[i];
      while (true) {
        if (i == str.length() - 1) {
          rez_operators.push_back(buf);
          break;
        }
        i++;
        if ((str[i].unicode() >= 48 && str[i].unicode() <= 57) ||
            str[i] == '.') {
          buf += str[i];
        } else {
          rez_operators.push_back(buf);
          break;
        }
      }
    }
    if ((str[i].unicode() >= 48 && str[i].unicode() <= 57) || str[i] == '.') {
      QString buf;
      buf += str[i];
      while (true) {
        if (i == str.length() - 1) {
          rez_operators.push_back(buf);
          break;
        }
        i++;
        if ((str[i].unicode() >= 48 && str[i].unicode() <= 57) ||
            str[i] == '.') {
          buf += str[i];
        } else {
          rez_operators.push_back(buf);
          break;
        }
      }
    }
    if (str[i].unicode() == 40 || operators.isEmpty()) {
      operators.push_back(str[i]);
      continue;
    }
    if (str[i].unicode() == 41) {
      while (operators.back().unicode() != 40) {
        rez_operators.push_back(operators.back());
        operators.pop_back();
      }
      operators.pop_back();
      continue;
    }
    if (str[i].unicode() < 48) {
      int pr = priority(str[i].unicode());
      while (!operators.isEmpty() &&
             priority(operators.back().unicode()) >= pr) {
        rez_operators.push_back(operators.back());
        operators.pop_back();
      }
      operators.push_back(str[i]);
    }
  }
  while (!operators.isEmpty()) {
    rez_operators.push_back(operators.back());
    operators.pop_back();
  }
}

int Pars::priority(char str) {
  switch (str) {
  case '(':
  case ')':
    return 0;
  case '+':
  case '-':
    return 1;
  case '*':
  case '/':
    return 2;
  default:
    return -1;
  }
}

double Pars::calcul() {
  double inf1;
  double inf2;
  QString bf;
  while (true) {
    if (rez_operators.size() == 1 &&
        (rez_operators.front().front().unicode() >= 48 ||
         (rez_operators.front().front().unicode() == 45 &&
          rez_operators.front().back().unicode() >= 48))) {
      return rez_operators.front().toDouble();
    }
    if ((rez_operators.front().front().unicode() >= 48 &&
         rez_operators.front().front().unicode() <= 57) ||
        (rez_operators.front().front().unicode() == 45 &&
         rez_operators.front().back().unicode() >= 48)) {
      operands.push_back(rez_operators.front());
      rez_operators.pop_front();
      continue;
    }
    inf2 = operands.back().toDouble();
    operands.pop_back();
    inf1 = operands.back().toDouble();
    operands.pop_back();
    switch (rez_operators.front().front().unicode()) {
    case '+':
      rez_operators.pop_front();
      inf1 += inf2;
      rez_operators.push_front(bf.setNum(inf1));
      break;
    case '-':
      rez_operators.pop_front();
      inf1 -= inf2;
      rez_operators.push_front(bf.setNum(inf1));
      break;
    case '*':
      rez_operators.pop_front();
      inf1 *= inf2;
      rez_operators.push_front(bf.setNum(inf1));
      break;
    case '/':
      rez_operators.pop_front();
      inf1 /= inf2;
      rez_operators.push_front(bf.setNum(inf1));
      break;
    }
  }
  return -1;
}

void Pars::clear() {
  operators.clear();
  operands.clear();
  rez_operators.clear();
}
