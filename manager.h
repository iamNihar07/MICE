#ifndef _MANAGER_H
#define _MANAGER_H
#include "person.h"
#include <string>
#include <iostream>
#include <fstream>

namespace Mice {
    class Manager : public Person {
      public:
        Manager(std::string name, std::string id, std::string phone);
        Manager(std::istream& ist);
        void save(std::ostream& ost);
    };
}

#endif
