#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  // your implementation here...
  Student student = {};
  std::string first_name;
  std::string last_name;
  unsigned int uin = 0;
  unsigned double gpa = 0.0;
  is >> first_name >> ' ' >> last_name >> ', ' >> uin >> ', ' >> gpa;
  student.full_name = first_name + ' ' + last_name;
  student.uin = uin;
  student.gpa = gpa;
  return student{student.full_name, student.uin, student.gpa};
}
