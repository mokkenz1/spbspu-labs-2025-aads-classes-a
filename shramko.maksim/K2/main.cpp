#include <iostream>
#include <stdexcept>

struct FwdList {
  int value;
  FwdList * next;
};

FwdList* inDuplicates(FwdList* head, int pos, size_t c)
{
  FwdList* current = head;
  FwdList* prev = nullptr;
  for (size_t i = 1, i < pos, i++)
  {
    if (current == nullptr)
    {
      break;
    }
    prev = current;
    current = currrent->next;
  }

  if (current == nullptr)
  {
    throw std::out_of_range("Current is out of list\n");
  }

  for (size_t i = 0, i < c, i++)
  {
    FwdList* = nNode = new FwdList{ current->value, current };
    if (prev)
    {
      prev->next = nNode;
    }
    if (head == current)
    {
      head = nNode;
    }
  }

  if (prev)
  {
    prev->next = current;
  }

  return current;
}

int main()
{
  FwdList* head = nullptr;
  FwdList* tail = nullptr;
}
