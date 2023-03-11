#pragma once

#include <deque>
#include <iostream>
#include <string>
#include <vector>

class PmergeMe {
 public:
  PmergeMe();
  PmergeMe(int argc, char **argv);
  ~PmergeMe();
  PmergeMe(PmergeMe const &src);
  PmergeMe &operator=(PmergeMe const &rhs);

  std::vector<int> &getvector() { return _vector; }
  const std::vector<int> &getvector() const { return _vector; }

  std::deque<int> mergeInsertionSort(std::deque<int> &dq) const;
  std::vector<int> mergeInsertionSort(std::vector<int> &v) const;

 private:
  std::deque<int> mergeSort(std::deque<int> &dq1, std::deque<int> &dq2) const;
  std::vector<int> mergeSort(std::vector<int> &v1, std::vector<int> &v2) const;
  std::deque<int> insertionSort(std::deque<int> &dq) const;
  std::vector<int> insertionSort(std::vector<int> &v) const;

 private:
  std::vector<int> _vector;
};

std::ostream &operator<<(std::ostream &out, const PmergeMe &rhs);
