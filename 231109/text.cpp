#include "text.hpp"
Text::Text(const std::string& t) : text(t) {};

std::string Text::get() const { return this->text; }