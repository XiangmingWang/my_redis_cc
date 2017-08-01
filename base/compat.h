// Author: Xiangming Wang
//
// Google compatibility declarations and inline definitions.
// These are assembled from OpenFst and Thrax code.

#ifndef BASE_COMPAT_H_
#define BASE_COMPAT_H_

#include <deque>
#include <iostream>  // NOLINT
#include <istream>  // NOLINT
#include <map>
#include <memory>
#include <ostream>  // NOLINT
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <mutex>

#include <unordered_set>
using std::unordered_set;
#include <unordered_map>
using std::unordered_map;

#include <bits/unique_ptr.h>  // NOLINT
#include <bits/shared_ptr.h>  // NOLINT

using std::cerr;
using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::istream;
using std::map;
using std::ostream;
using std::set;
using std::stack;
using std::string;
using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;
using std::vector;
using std::pair;

#endif  // BASE_COMPAT_H_

