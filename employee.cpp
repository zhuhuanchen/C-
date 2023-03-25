//
// Created by zhc on 2023/3/25.
//

#include <iostream>
#include "employee.h"

//构造函数的实现
Employee::Employee(int id, std::string name, int dId) {
    this->m_Id = id;  //感觉这个this可以去掉
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Employee::showInfo() {
    std::cout<<"职工编号:"<<this->m_Id
    <<" \t职工姓名:" <<this->m_Name
    <<" \t岗位:"<<this->getDeptName()
    <<" \t岗位职责:完成经理交给的任务"<<std::endl;
}

std::string Employee::getDeptName() {
    return std::string("员工");
}