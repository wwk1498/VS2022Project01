#include "manager.h"

manager::manager(int id, string name, int deptid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = deptid;
}

void manager::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交给的任务，并且下发任务给普通员工！" << endl;

}

string manager::getDeptName()
{
	return string("经理");
}
