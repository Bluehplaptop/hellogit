#include <string>
class Student
{
private:
	string name;
	string course;
public:
	Student ()
	{
	name = " ";
	course = " ";
	}
void setname (string n)
      {
	name = n;
      }
string getname ()
      {
	return name;
      }
void setcourse (string c)
	{
	course = c;
	}
string getcourse ()
	{
	return course;
	}
}
