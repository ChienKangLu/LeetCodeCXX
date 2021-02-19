#ifndef IMPLEMENT_STRSTR_SOLUTION1_H_
#define IMPLEMENT_STRSTR_SOLUTION1_H_

#include "questions/implementstrstr/Solution.hpp"
#include <iostream>

int Solution1::strStr(std::string haystack, std::string needle)
{
  if (needle.empty())
  {
    return 0;
  }
  else if (needle.size() > haystack.size())
  {
    return -1;
  }

  int index = -1;
  int current = 0;
  for (int i = 0; i < haystack.size(); i++)
  {
    if (haystack.size() - i < needle.size())
    {
      break;
    }
    current = i;
    index = i;
    for (int j = 0; j < needle.size(); j++)
    {
      if (haystack[current] != needle[j])
      {
        break;
      }
      current++;
    }
    if (current - index == needle.size())
    {
      break;
    }
    index = -1;
  }
  return index;
}

#endif