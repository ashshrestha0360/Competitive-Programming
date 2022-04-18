#include <iostream>
using namespace std;
struct student
{
	int roll;
	char name[40];
	float gpa;
};
int main()
{
	struct student s[10];
    int i, j;
    float largest = 0;
    for (int i = 0; i < 5; i++)
    {
    	cin>>&s[i].roll>>&s[i].name>>&s[i].gpa;
    }

    for (i = 0; i < 5; i++)
    {
        if (largest < s[i].gpa)
        {
            largest = s[i].gpa;
            j = i;
        }
    }

    cout<<s[j].roll<<s[j].name<<s[j].gpa;

   return 0;


}