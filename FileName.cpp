#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
using namespace std;
double review(double x, double y) {
  return x / y;
}

double percentage(int v, int b) {
  return  (static_cast<double>(v) / b) * 100;;
}
int main() {

	//structs 
	struct Student{
		string name;
		int order;
		double scorex;

	};
	
	//vector 
	vector<double> scores;
  // student's score
	double highestt =-1;
	double lowest = 101;
  double scr;
  int numbers_of_student;
  double total = 0.0;
  int passed_students = 0;
cout << "Please enter the numbers of student: ";
cin >> numbers_of_student;
cout << "So, this class has " << numbers_of_student << " students" << "\n";

int n = numbers_of_student;
for(int i = 1; i <= n; ++i) {
   cout << "Enter score of the student number " << i <<": ";
  cin >> scr ;



  //invalid score
while(scr > 100 || scr < 0) {
  cout << "Invalid score, please try again: ";
  cin >> scr; 
}
// highest, lowest

// save score to vector
scores.push_back(scr);
cout << endl;
double highestt = *max_element(scores.begin(), scores.end());
double lowest = *min_element(scores.begin(), scores.end());

//check pass, fail
  string result = (scr >= 50) ? "passed" : "failed"; 
cout << "The student number " << i << " " << result <<" ";

if (scr == 100) {
	cout << "A+" << endl;
}
else if (scr >= 90 && scr < 100) {
	cout << "A" << endl;
}
else if (scr >= 80 && scr < 90) {
	cout << "B" << endl;
}
else if (scr >= 70 && scr < 80) {
	cout << "B-" << endl;
}
else if (scr >= 60 && scr < 70) {
	cout << "C" << endl;
}
else if (scr >= 50 && scr < 60) {
	cout << "C-" << endl;
}

else if (scr >= 40 && scr < 50) {
	cout << "D" << endl;
}
else if (scr >= 30 && scr < 40) {
	cout << "D-" << endl;
}
else if (scr >= 20 && scr < 30) {
	cout << "F" << endl ;
}
else if (scr >= 10 && scr < 20) {
	cout << "F" << endl;
}
else if (scr >= 1 && scr < 10) {
	cout << "F" << endl ;
}
else {
	cout << "F" << endl;
}
//plus total with scr
  total += scr;

// Pass percentage
if(result == "passed") {
  passed_students += 1;
}
}
// additional calculation
double avg = review(total, numbers_of_student);
cout << "The average score of this class is: " << avg << "\n";
double percent = percentage(passed_students, numbers_of_student);
cout << "The passed students of this class is: " << passed_students << " over " << numbers_of_student <<", which account for " << percent <<" %" << endl;



cout << "\n=========== Final Report ============" << endl;
cout << fixed << setprecision(2);
cout << "Average: " << avg << endl;
cout << "Pass rate: " << percent  << "%" << endl;
cout << "Highest score: " << highestt << endl;
cout << "Lowest score: " << lowest << endl;




return 0; 
}


