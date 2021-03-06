//
//  median.cpp
//  computing_grades_extract_fails
//
//  Created by Yifan on 2016-12-28.
//  Copyright © 2016 Yifan. All rights reserved.
//
// source file for the median function
#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::sort;
using std::vector;

// compute the median of a vector<double>
double median(vector<double> vec)
{
    
    if (vec.empty())
        throw domain_error("median of an empty vector");
    
    typedef vector<double>::size_type vec_sz;
    
    vec_sz size = vec.size();
    
    sort(vec.begin(),vec.end());
    
    vec_sz mid = size/2;
    
    return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}
