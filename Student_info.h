//
//  Student_info.h
//  computing_grades_extract_fails
//
//  Created by Yifan on 2016-12-28.
//  Copyright © 2016 Yifan. All rights reserved.
//
#ifndef GUARD_STUDENT_INFO_H
#define GUARD_STUDENT_INFO_H

// Student_info.h
#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif // GUARD_STUDENT_INFO_H
