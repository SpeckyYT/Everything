#include <chaiscript/chaiscript.hpp>

std::string helloWorld(const std::string &t_name) {
  return "ever " + t_name + "ing";
}

int main() {
  chaiscript::ChaiScript chai;
  chai.add(chaiscript::fun(&helloWorld), "everyThing");

  chai.eval(R"(
    puts(everyThing("yth"));
  )");
}
