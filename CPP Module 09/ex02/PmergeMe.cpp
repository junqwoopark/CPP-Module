#include "PmergeMe.hpp"

#include <sys/time.h>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    _vector.push_back(std::stoi(argv[i]));
  }
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &src) {
  *this = src;
  return;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
  if (this != &rhs) {
  }
  return *this;
}

std::deque<int> PmergeMe::mergeInsertionSort(std::deque<int> &dq) const {
  if (dq.size() <= 10) return insertionSort(dq);

  std::deque<int> dq1(dq.begin(), dq.begin() + dq.size() / 2);
  std::deque<int> dq2(dq.begin() + dq.size() / 2, dq.end());
  dq1 = mergeInsertionSort(dq1);
  dq2 = mergeInsertionSort(dq2);
  return mergeSort(dq1, dq2);
}

std::vector<int> PmergeMe::mergeInsertionSort(std::vector<int> &v) const {
  if (v.size() <= 10) return insertionSort(v);
  std::vector<int> v1(v.begin(), v.begin() + v.size() / 2);
  std::vector<int> v2(v.begin() + v.size() / 2, v.end());

  v1 = mergeInsertionSort(v1);
  v2 = mergeInsertionSort(v2);
  return mergeSort(v1, v2);
}

std::deque<int> PmergeMe::mergeSort(std::deque<int> &dq1,
                                    std::deque<int> &dq2) const {
  std::deque<int> dq;
  while (!dq1.empty() && !dq2.empty()) {
    if (dq1.front() < dq2.front()) {
      dq.push_back(dq1.front());
      dq1.pop_front();
    } else {
      dq.push_back(dq2.front());
      dq2.pop_front();
    }
  }
  while (!dq1.empty()) {
    dq.push_back(dq1.front());
    dq1.pop_front();
  }
  while (!dq2.empty()) {
    dq.push_back(dq2.front());
    dq2.pop_front();
  }
  return dq;
}

std::vector<int> PmergeMe::mergeSort(std::vector<int> &v1,
                                     std::vector<int> &v2) const {
  std::vector<int> v;
  while (!v1.empty() && !v2.empty()) {
    if (v1.front() < v2.front()) {
      v.push_back(v1.front());
      v1.erase(v1.begin());
    } else {
      v.push_back(v2.front());
      v2.erase(v2.begin());
    }
  }
  while (!v1.empty()) {
    v.push_back(v1.front());
    v1.erase(v1.begin());
  }
  while (!v2.empty()) {
    v.push_back(v2.front());
    v2.erase(v2.begin());
  }
  return v;
}

std::deque<int> PmergeMe::insertionSort(std::deque<int> &dq) const {
  for (int i = 1; i < dq.size(); i++) {
    int j = i;
    while (j > 0 && dq[j - 1] > dq[j]) {
      int tmp = dq[j];
      dq[j] = dq[j - 1];
      dq[j - 1] = tmp;
      j--;
    }
  }
  return dq;
}

std::vector<int> PmergeMe::insertionSort(std::vector<int> &v) const {
  for (int i = 1; i < v.size(); i++) {
    int j = i;
    while (j > 0 && v[j - 1] > v[j]) {
      int tmp = v[j];
      v[j] = v[j - 1];
      v[j - 1] = tmp;
      j--;
    }
  }
  return v;
}

std::ostream &operator<<(std::ostream &out, PmergeMe const &rhs) {
  struct timeval start, end;
  std::vector<int> tmp(rhs.getvector().begin(), rhs.getvector().end());
  std::deque<int> dq(rhs.getvector().begin(), rhs.getvector().end());
  std::vector<int> v(rhs.getvector().begin(), rhs.getvector().end());

  out << "Before :";
  for (int i = 0; i < rhs.getvector().size(); i++) {
    out << " " << rhs.getvector()[i];
  }
  out << std::endl;

  sort(tmp.begin(), tmp.end());
  out << "After :";
  for (int i = 0; i < rhs.getvector().size(); i++) {
    out << " " << tmp[i];
  }
  out << std::endl;

  gettimeofday(&start, NULL);
  dq = rhs.mergeInsertionSort(dq);
  gettimeofday(&end, NULL);

  out << "deque: " << std::fixed << end.tv_usec - start.tv_usec
      << " microseconds" << std::endl;

  gettimeofday(&start, NULL);
  v = rhs.mergeInsertionSort(v);
  gettimeofday(&end, NULL);

  out << "vector: " << std::fixed << end.tv_usec - start.tv_usec
      << " microseconds" << std::endl;

  return out;
}
