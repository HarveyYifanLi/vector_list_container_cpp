//
//  grade.h
//  computing_grades_extract_fails
//
//  Created by Yifan on 2016-12-28.
//  Copyright © 2016 Yifan. All rights reserved.
//
#ifndef GUARD_GRADE_H
#define GUARD_GRADE_H

//grade.h
#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif // GUARD_GRADE_H
