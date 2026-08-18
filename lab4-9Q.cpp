#include <iostream>
using namespace std;

class Exam {
private:
    string name, subject;
    float marks, maxMarks;

public:
    Exam(string n, string s, float m, float mm) {
        name = n;
        subject = s;
        marks = m;
        maxMarks = mm;
    }

    friend class Result;
};

class Result {
public:
    void display(Exam e) {
        float percentage = (e.marks / e.maxMarks) * 100;

        cout << "Student: " << e.name << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << "/" << e.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass";
        else
            cout << "Result: Fail";
    }
};

int main() {
    Exam e("Rudra", "OOP", 28, 100);

    Result r;
    r.display(e);

    return 0;
}