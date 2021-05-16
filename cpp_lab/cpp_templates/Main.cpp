#include <iostream>

#include "Array.h"
#include "Vector.h"

int main()
{
  Array<std::string, 2> data;
  data[0] = "Trevalkov";
  data[1] = "C";

  Vector<std::string> vector;
  vector.PushBack("Trevalkov");
  vector.PushBack("C");
  vector.PushBack("Vector");
  vector.PushBack("Trevalkov");
  vector.PushBack("Trevalkov");
  vector.PushBack("Trevalkov");
  vector.PushBack("Trevalkov");
  vector.PushBack("C");
  vector.PushBack("Vector");
  vector.PushBack("C");
  vector.PushBack("Vector");
  vector.PushBack("C");
  vector.PushBack("Vector");
  vector.PushBack("C");
  vector.PushBack("Vector");

  std::cin.get();
}
