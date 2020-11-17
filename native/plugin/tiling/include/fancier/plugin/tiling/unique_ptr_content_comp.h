#ifndef _UNIQUE_PTR_CONTENT_COMP_H_
#define _UNIQUE_PTR_CONTENT_COMP_H_

#include <memory>


/**
 * Comparator of the contents of \c std::unique_ptr.
 * @tparam T Data type held by the pointers to compare.
 */
template <typename T>
struct UniquePtrContentComp {
  bool operator()(const std::unique_ptr<T>& a, const std::unique_ptr<T>& b) const {
    return !b || (a && *a < *b);
  }
};

#endif // _UNIQUE_PTR_CONTENT_COMP_H_
