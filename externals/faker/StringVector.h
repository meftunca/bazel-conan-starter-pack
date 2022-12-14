
#pragma once

#include <string>
#include <vector>

namespace Faker {
class StringVector;
}

/**
 * A helper class for handling a vector of strings.
 */
class Faker::StringVector : public std::vector<std::string> {
public:
  StringVector();

  void tokenize(const std::string &, const std::string &);
};
