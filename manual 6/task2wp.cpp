#include<iostream>
#include<string>
using namespace std;
string check(int marks);

int main()

{
	cout << "ENTER YoUR MARKS";
	float marks;
	cin >> marks;

	string result = check(marks);
	cout << result;

}


string check(int marks)
{
	string result;

	if (marks > 50)
	{
		result = "you passed with  " + to_string(marks) + "  marks";
	}
	else
	{
		result = "you failed with  " + to_string(marks) + "  marks";
	}
	return result;

}